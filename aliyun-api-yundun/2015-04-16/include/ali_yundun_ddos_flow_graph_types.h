#ifndef ALI_YUNDUN_DDOS_FLOW_GRAPH_TYPESH
#define ALI_YUNDUN_DDOS_FLOW_GRAPH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunDdosFlowGraphRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct YundunDdosFlowGraphNormalFlowType {
  long time;
  long bit_recv;
  long bit_send;
  long pkt_recv;
  long pkt_send;
};
struct YundunDdosFlowGraphTotalFlowType {
  long time;
  long bit_recv;
  long pkt_recv;
};
struct YundunDdosFlowGraphResponseType {
  std::vector<YundunDdosFlowGraphNormalFlowType> normal_flows;
  std::vector<YundunDdosFlowGraphTotalFlowType> total_flows;
};
} // end namespace
#endif
