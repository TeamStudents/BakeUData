/**
 * Project 数据备份软件
 */


#include "Pipeline.h"

/**
 * Pipeline implementation
 * 
 * class Pipeline {
 *     using Filter = function<void(istream&, ostream&)>;
 *     static run(src: istream&, dst: ostream&, chain: vector<Filter>);
 * };
 */


/**
 * @param src
 * @param dst
 * @param chain
 */
static void Pipeline::Run(istream & src, istream & dst, vector<Filter> & chain) {

}