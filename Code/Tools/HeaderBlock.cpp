/**
 * Project 数据备份软件
 */


#include "HeaderBlock.h"

/**
 * HeaderBlock implementation
 * 
 * uint32_t format_version;
 * uint64_t backup_time_utc;
 * std::string hostname;
 * std::vector<std::string> source_paths;
 * std::vector<nlohmann::json> pipeline;  // 算法链
 * nlohmann::json filters;                // 过滤规则
 */
