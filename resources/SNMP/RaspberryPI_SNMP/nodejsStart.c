/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "nodejsStart.h"
#include <syslog.h>
#include <wiringPi.h>

static unsigned int long gNodeJsControlWord = 0;

/** Initializes the nodejsStart module */
void
init_nodejsStart(void)
{
    const oid nodejsStart_oid[] = { 1,3,6,1,4,1,9100,1,1 };

  DEBUGMSGTL(("nodejsStart", "Initializing\n"));

    if(wiringPiSetup() == -1)
     {
         syslog(LOG_ERR,"Unable to setup GPIO .Wiring exiting now\r\n");
        
     }

    else
     {
        syslog(LOG_INFO,"Initializing GPIO Pin 18 to output mode\r\n");

         pinMode(1,OUTPUT);
     }
 
    syslog(LOG_INFO, "Registering Scalar Object --Node Scalar\r\n");
     

    netsnmp_register_scalar(
        netsnmp_create_handler_registration("nodejsStart", handle_nodejsStart,
                               nodejsStart_oid, OID_LENGTH(nodejsStart_oid),
                               HANDLER_CAN_RWRITE
        ));
}

int
handle_nodejsStart(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;
    /* We are never called for a GETNEXT if it's registered as a
       "instance", as it's "magically" handled for us.  */

    /* a instance handler also only hands us one request at a time, so
       we don't need to loop over a list of requests; we'll only get one. */
 
     unsigned int long reqVal;
   
    switch(reqinfo->mode) {

        case MODE_GET:
            syslog(LOG_INFO,"Rasp MIB gets value = %u\r\n",gNodeJsControlWord);
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, &gNodeJsControlWord,sizeof(gNodeJsControlWord));
            break;

        /*
         * SET REQUEST
         *
         * multiple states in the transaction.  See:
         * http://www.net-snmp.org/tutorial-5/toolkit/mib_module/set-actions.jpg
         */
        case MODE_SET_RESERVE1:
                /* or you could use netsnmp_check_vb_type_and_size instead */
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;

        case MODE_SET_RESERVE2:
            /* XXX malloc "undo" storage buffer */
         syslog(LOG_ERR,"MODE_SET_RESERVE2..not implemented in the code\r\n");
         #if 0
            if (/* XXX if malloc, or whatever, failed: */) {
                netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_RESOURCEUNAVAILABLE);
            }
         #endif
            break;

        case MODE_SET_FREE:
            /* XXX: free resources allocated in RESERVE1 and/or
               RESERVE2.  Something failed somewhere, and the states
               below won't be called. */
            break;

        case MODE_SET_ACTION:
          
            reqVal = (unsigned long)*requests->requestvb->val.integer;
            /* XXX: perform the value change here */
            if (reqVal != gNodeJsControlWord) {
                syslog(LOG_INFO,"Control from user = %u\r\n",reqVal);
                gNodeJsControlWord = reqVal;
                if(reqVal < 0)
                {
                // Range ERROR
                 syslog(LOG_ERR,"Rasp Mib: SNMP Value Error\r\n");
                 netsnmp_set_request_error(reqinfo, requests,SNMPERR_RANGE);
                }
               else
               {
                  syslog(LOG_INFO,"Rasp Mib: Updated Global Variable\r\n");
                  gNodeJsControlWord = reqVal;
                  if(gNodeJsControlWord != 0)
                   {
                     syslog(LOG_INFO,"Turning ON lead - Ping 18\r\n");
                     digitalWrite(1,1);
                   }
                  else
                   {
 
                     syslog(LOG_INFO,"Turning off LED - Pin 18\r\n");
                     digitalWrite(1,0);
                   }           
               }
            }
            break;

        case MODE_SET_COMMIT:
            /* XXX: delete temporary storage */
            syslog(LOG_ERR,"MODE_SET_COMMIT..not implemented in the code\r\n");
           #if 0
            if (/* XXX: error? */) {
                /* try _really_really_ hard to never get to this point */
                netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_COMMITFAILED);
            }
           #endif
            break;

        case MODE_SET_UNDO:
            syslog(LOG_ERR,"MODE_SET_UNDO..not implemented in the code\r\n");
            /* XXX: UNDO and return to previous value for the object */
            #if 0
            if (/* XXX: error? */) {
                /* try _really_really_ hard to never get to this point */
                netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_UNDOFAILED);
            }
            #endif
            break;

        default:
            syslog(LOG_ERR,"Something wrong in RASP- MIB contact - Shreyasjoshi15@gmail.com\r\n");
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_nodejsStart\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}
