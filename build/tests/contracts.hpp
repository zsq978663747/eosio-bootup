#pragma once
#include <eosio/testing/tester.hpp>

namespace eosio { namespace testing {

struct contracts {
   static std::vector<uint8_t> system_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.system/eosio.system.wasm"); }
   static std::string          system_wast() { return read_wast("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.system/eosio.system.wast"); }
   static std::vector<char>    system_abi() { return read_abi("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.system/eosio.system.abi"); }
   static std::vector<uint8_t> token_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.token/eosio.token.wasm"); }
   static std::string          token_wast() { return read_wast("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.token/eosio.token.wast"); }
   static std::vector<char>    token_abi() { return read_abi("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.token/eosio.token.abi"); }
   static std::vector<uint8_t> msig_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.msig/eosio.msig.wasm"); }
   static std::string          msig_wast() { return read_wast("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.msig/eosio.msig.wast"); }
   static std::vector<char>    msig_abi() { return read_abi("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.msig/eosio.msig.abi"); }
   static std::vector<uint8_t> wrap_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.wrap/eosio.wrap.wasm"); }
   static std::string          wrap_wast() { return read_wast("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.wrap/eosio.wrap.wast"); }
   static std::vector<char>    wrap_abi() { return read_abi("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.wrap/eosio.wrap.abi"); }
   static std::vector<uint8_t> bios_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.bios/eosio.bios.wasm"); }
   static std::string          bios_wast() { return read_wast("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.bios/eosio.bios.wast"); }
   static std::vector<char>    bios_abi() { return read_abi("/home/ubuntu/opt/bos.contracts/build/tests/../eosio.bios/eosio.bios.abi"); }

   struct util {
      static std::vector<uint8_t> test_api_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/tests/test_contracts/test_api.wasm"); }
      static std::vector<uint8_t> exchange_wasm() { return read_wasm("/home/ubuntu/opt/bos.contracts/tests/test_contracts/exchange.wasm"); }
      static std::vector<uint8_t> system_wasm_old() { return read_wasm("/home/ubuntu/opt/bos.contracts/tests/test_contracts/eosio.system.old/eosio.system.wasm"); }
      static std::vector<char>    system_abi_old() { return read_abi("/home/ubuntu/opt/bos.contracts/tests/test_contracts/eosio.system.old/eosio.system.abi"); }
      static std::vector<uint8_t> msig_wasm_old() { return read_wasm("/home/ubuntu/opt/bos.contracts/tests/test_contracts/eosio.msig.old/eosio.msig.wasm"); }
      static std::vector<char>    msig_abi_old() { return read_abi("/home/ubuntu/opt/bos.contracts/tests/test_contracts/eosio.msig.old/eosio.msig.abi"); }
   };
};
}} //ns eosio::testing
