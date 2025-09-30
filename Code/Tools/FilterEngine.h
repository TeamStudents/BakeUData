/**
 * Project 数据备份软件
 */


#ifndef _FILTERENGINE_H
#define _FILTERENGINE_H

class FilterEngine {
public: 
    vector<unique_ptr<IFilter>> filters;
    
/**
 * @param filter
 */
void AddFilter(unique_ptr<IFilter> filter);
    
/**
 * @param data
 */
void Match(directory_entry data);
};

#endif //_FILTERENGINE_H