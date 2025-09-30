/**
 * Project 数据备份软件
 */


#ifndef _FACTORY_H
#define _FACTORY_H

class Factory {
public: 
    
static Factory & Instacne();
    
/**
 * @param key
 * @param creator
 */
void RegisterCreator(string key, Creator creator);
    
/**
 * @param key
 */
unique_ptr<Interface> Create(string & key);
};

#endif //_FACTORY_H