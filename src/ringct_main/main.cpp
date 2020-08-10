#include <iostream>
#include <device/device.hpp>
#include <device/device_default.hpp>
#include <ringct/rctSigs.h>
//#include "rctTypes.h"
//#include "rctTypes.h"

using namespace rct;

int main() {
    std::cout << "lol kek" << std::endl << "4eburek";

    rct::key message = rct::key({88,16,250,110,68,200,105,13,117,253,153,111,246,79,59,255,164,151,114,184,193,103,167,100,93,189,143,211,217,45,238,47});
    rct::ctkeyV inSk = rct::ctkeyV();
    inSk.push_back(rct::ctkey({dest:rct::key(), mask:rct::key()}));
    std::vector<key> destinations;
    std::vector<xmr_amount> inamounts;
    std::vector<xmr_amount> outamounts;
    xmr_amount txnFee;
    ctkeyM mixRing;
    keyV amount_keys;
    std::vector<multisig_kLRki> *kLRki;
    multisig_out *msout;
    std::vector<unsigned int> index;
    ctkeyV outSk;
    RCTConfig rct_config;
    hw::core::device_default* hwdev = new hw::core::device_default();
    rctSig sig;

    sig = rct::genRctSimple(message, inSk, destinations, inamounts, outamounts, txnFee, mixRing, amount_keys, NULL, NULL, index, outSk, rct_config, (hw::device &) hwdev);

    return 0;
}
