#include <iostream>
#include <device/device.hpp>
#include <device/device_default.hpp>
#include <ringct/rctSigs.h>
//#include "rctTypes.h"
//#include "rctTypes.h"

using namespace rct;

int main() {
    std::cout << "lol kek" << std::endl << "4eburek";

    rct::key message = rct::key({36,137,98,13,113,190,128,144,77,175,169,227,78,166,20,6,194,148,191,2,254,223,8,59,63,159,230,164,132,29,11,133});

    rct::ctkeyV inSk;
    inSk.push_back(rct::ctkey({
        dest: rct::key({241,74,16,159,44,138,122,81,231,173,139,132,4,196,174,141,172,36,41,242,243,0,245,7,55,33,209,74,121,130,78,8}),
        mask: rct::key({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})}));

    std::vector<key> destinations;
    destinations.push_back(rct::key({61,8,217,196,233,138,67,8,84,196,171,97,206,77,225,72,28,90,74,12,141,61,179,24,216,246,86,131,55,245,84,57}));
    destinations.push_back(rct::key({158,222,29,191,78,60,45,200,223,179,90,155,62,184,65,127,12,125,43,99,108,17,214,174,32,215,66,75,242,93,219,85}));

    std::vector<xmr_amount> inamounts;
    inamounts.push_back(xmr_amount(1000000000000));

    std::vector<xmr_amount> outamounts;
    outamounts.push_back(xmr_amount(20000000000));
    outamounts.push_back(xmr_amount(960000000000));

    xmr_amount txnFee = xmr_amount(20000000000);

    ctkeyM mixRing;
    ctkeyV mixRingRow;
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({31,13,227,71,73,206,216,133,53,42,0,157,46,140,213,80,226,89,222,244,167,176,145,76,198,237,149,151,19,7,216,204}),
        mask: rct::key({172,54,50,98,49,147,217,228,155,47,230,161,67,243,39,69,45,116,235,113,73,225,55,254,250,60,84,86,59,105,22,160}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({143,26,219,205,169,77,135,39,153,241,81,189,197,252,123,1,3,157,29,88,31,42,101,137,34,40,23,223,236,97,239,187}),
        mask: rct::key({139,143,53,153,30,3,253,152,207,113,8,244,100,119,52,115,80,186,230,57,41,173,230,2,28,21,36,189,194,207,88,25}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({16,46,255,94,5,196,120,148,104,249,248,195,1,130,186,57,147,222,14,154,34,215,23,189,62,58,188,133,217,91,46,13}),
        mask: rct::key({84,43,127,177,76,97,113,44,25,37,107,11,14,20,82,3,116,168,26,98,200,179,243,30,170,172,98,75,13,134,59,12}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({59,139,133,109,104,220,21,143,11,199,42,94,9,228,24,247,148,104,137,9,169,50,212,71,168,150,22,96,42,64,28,199}),
        mask: rct::key({44,241,223,238,91,141,103,113,228,58,120,67,223,13,48,235,250,78,119,227,150,231,244,111,14,137,162,152,18,114,230,46}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({45,37,113,92,162,69,157,140,126,32,29,173,89,216,129,194,242,81,185,249,126,106,244,188,248,172,19,250,1,7,105,2}),
        mask: rct::key({167,181,133,74,43,196,102,177,27,174,214,59,188,128,158,89,16,59,144,253,158,180,37,54,252,165,131,202,74,85,2,88}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({223,60,201,65,93,80,36,117,156,52,162,81,204,2,27,22,86,38,174,57,45,171,235,164,147,220,111,50,3,140,219,60}),
        mask: rct::key({87,162,119,227,174,5,142,131,65,14,47,212,237,189,228,193,48,148,27,104,81,229,68,50,207,168,240,167,33,142,103,107}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({69,6,167,161,33,184,15,239,75,86,158,201,234,124,168,214,101,73,200,145,105,66,83,153,65,12,131,19,117,253,71,216}),
        mask: rct::key({13,137,187,145,255,84,35,190,200,199,250,64,231,203,231,57,71,93,4,147,251,102,91,61,221,9,182,34,219,169,90,115}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({64,33,225,42,149,187,171,124,200,115,212,141,247,142,46,123,195,250,60,191,13,66,247,173,252,41,138,184,69,45,197,97}),
        mask: rct::key({21,10,199,101,192,211,233,99,187,116,95,98,252,82,193,95,253,15,83,154,123,108,165,236,34,227,32,90,249,79,172,165}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({84,179,38,194,142,97,43,183,80,9,233,62,104,199,185,224,13,34,153,62,175,237,44,87,163,185,55,112,8,184,140,48}),
        mask: rct::key({211,22,12,36,24,170,9,113,121,185,17,196,119,150,153,122,13,78,213,139,11,68,0,195,249,52,186,25,190,185,137,51}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({115,236,47,30,254,51,6,33,91,32,205,131,64,77,177,211,90,74,154,117,83,213,220,120,91,88,75,130,252,236,52,124}),
        mask: rct::key({20,112,199,3,218,91,45,197,67,255,71,28,238,248,80,111,153,11,56,57,170,255,112,146,146,57,243,222,209,196,246,187}),
    }));
    mixRingRow.push_back(rct::ctkey({
        dest: rct::key({187,255,96,90,35,133,183,243,70,246,19,229,241,30,253,186,167,246,187,179,118,87,124,82,77,76,167,164,138,74,223,64}),
        mask: rct::key({150,143,13,196,27,119,35,178,92,119,164,228,151,62,100,96,115,55,109,137,230,68,96,79,5,38,25,43,144,144,133,161}),
    }));

    mixRing.push_back(mixRingRow);

    keyV amount_keys;
    amount_keys.push_back(rct::key({207,74,45,122,174,71,153,130,127,240,34,97,118,146,144,32,62,249,64,107,209,176,59,161,216,7,32,246,104,71,49,4}));
    amount_keys.push_back(rct::key({254,145,29,70,1,70,111,57,184,253,175,132,184,184,35,113,204,12,135,78,60,254,88,71,164,223,35,138,231,205,146,13}));
//    std::vector<multisig_kLRki> *kLRki;
//    multisig_out *msout;
    std::vector<unsigned int> index;
    index.push_back(2);

    ctkeyV outSk;
    RCTConfig rct_config {
            rct::RangeProofPaddedBulletproof,
            2
    };

//    hw::core::device_default hwdev = new hw::core::device_default();
    hw::device &m_device = hw::get_device("default");
    m_device.set_mode(hw::device::TRANSACTION_CREATE_REAL);

    rctSig sig;

    sig = rct::genRctSimple(message, inSk, destinations, inamounts, outamounts, txnFee, mixRing, amount_keys, NULL, NULL, index, outSk, rct_config, m_device);
    bool res1 = rct::verRctNonSemanticsSimple(sig);
    bool res2 = rct::verRctSimple(sig);
    bool res3 = rct::verRctMGSimple(get_pre_mlsag_hash(sig, hw::get_device("default")), sig.p.MGs[0], mixRing[0], sig.get_pseudo_outs()[0]);
    if(res1) {
        std::cout << "res1==true" << std::endl;
    }
    if(res2){
        std::cout << "res2==true" << std::endl;
    }
    if(res3){
        std::cout << "res3==true" << std::endl;
    }

    std::cout << "finish" << std::endl;

    return 0;
}
