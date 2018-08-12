#include "object_id.hpp"
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

using namespace graphene::db;
using namespace std;
using namespace boost;

enum object_type
{
   null_object_type,
   base_object_type,
   account_object_type,
   asset_object_type,
   force_settlement_object_type,
   committee_member_object_type,
   witness_object_type,
   limit_order_object_type,
   call_order_object_type,
   custom_object_type,
   proposal_object_type,
   operation_history_object_type,
   withdraw_permission_object_type,
   vesting_balance_object_type,
   worker_object_type,
   balance_object_type,
   OBJECT_TYPE_COUNT ///< Sentry value which contains the number of different object types
};

int main()
{
    object_id_type id;
    id.number = 0xffaa11;
    cout << boost::lexical_cast<std::string>(id.space()) << endl;
    cout << boost::lexical_cast<std::string>(id.type()) << endl;
    cout << boost::lexical_cast<std::string>(id.space_type()) << endl;
    int64_t int64Value = 0x00ff;
    cout << int64Value << endl;
    printf("0x%016", int64Value);
    cout << null_object_type << endl;
    cout << OBJECT_TYPE_COUNT << endl;

}
