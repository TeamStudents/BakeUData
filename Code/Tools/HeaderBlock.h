/**
 * Project 数据备份软件
 */


#ifndef _HEADERBLOCK_H
#define _HEADERBLOCK_H

class HeaderBlock {
public: 
    uint32_t format_version;
    uint64_t backup_time_utc;
    string hostname;
    vector<string> source_path;
    vector<json> pipeline;
    json filters;
};

#endif //_HEADERBLOCK_H