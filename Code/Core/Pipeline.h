/**
 * Project 数据备份软件
 */


#ifndef _PIPELINE_H
#define _PIPELINE_H

class Pipeline {
public: 
    
/**
 * @param src
 * @param dst
 * @param chain
 */
static void Run(istream & src, istream & dst, vector<Filter> & chain);
};

#endif //_PIPELINE_H