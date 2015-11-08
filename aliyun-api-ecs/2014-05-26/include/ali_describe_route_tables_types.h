#ifndef ALI_DESCRIBE_ROUTE_TABLES_TYPESH
#define ALI_DESCRIBE_ROUTE_TABLES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeRouteTablesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vrouter_id;
  std::string route_table_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct DescribeRouteTablesRouteEntryType {
  std::string route_table_id;
  std::string destination_cidr_block;
  std::string type;
  std::string status;
  std::string instance_id;
  std::string next_hop_type;
};
struct DescribeRouteTablesRouteTableType {
  std::vector<DescribeRouteTablesRouteEntryType> route_entrys;
  std::string vrouter_id;
  std::string route_table_id;
  std::string route_table_type;
  std::string creation_time;
};
struct DescribeRouteTablesResponseType {
  std::vector<DescribeRouteTablesRouteTableType> route_tables;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
