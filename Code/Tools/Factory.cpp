/**
 * Project 数据备份软件
 */


#include "Factory.h"

/**
 * Factory implementation
 * 
 * template <typename Interface>
 * class Factory {
 * public:
 *     using Creator = std::function<std::unique_ptr<Interface>()>;
 *     static Factory& instance();
 *     void registerCreator(const std::string& key, Creator c);
 *     std::unique_ptr<Interface> create(const std::string& key);
 * };
 */


/**
 * @return Factory &
 */
static Factory & Factory::Instacne() {
    return null;
}

/**
 * @param key
 * @param creator
 */
void Factory::RegisterCreator(string key, Creator creator) {

}

/**
 * @param key
 * @return unique_ptr<Interface>
 */
unique_ptr<Interface> Factory::Create(string & key) {
    return null;
}