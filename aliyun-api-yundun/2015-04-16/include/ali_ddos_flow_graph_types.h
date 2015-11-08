#ifndef ALI_DDOS_FLOW_GRAPH_TYPESH
#define ALI_DDOS_FLOW_GRAPH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DdosFlowGraphRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct DdosFlowGraphNormalFlowType {
  long time;
  long bit_recv;
  long bit_send;
  long pkt_recv;
  long pkt_send;
};
struct DdosFlowGraphTotalFlowType {
  long time;
  long bit_recv;
  long pkt_recv;
};
struct DdosFlowGraphResponseType {
  std::vector<DdosFlowGraphNormalFlowType> normal_flows;
  std::vector<DdosFlowGraphTotalFlowType> total_flows;
};
} // end namespace
#endif
