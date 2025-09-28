# UML说明

## 说明内容

1.主体使用AI构建： https://www.kimi.com/share/d3ckulqque5k0h2t55j0

2.Factory类和Pipeline类文档中有额外说明starUML中无法表示的内容

## 主要操作

1. Main函数中调用GUI，GUI按钮安排Factory生成接口实现类，并分配给实际Driver操作。
2. Driver上传操作经过封装HeaderBlock、过滤、打包、压缩、加密、序列化HeaderBlock、上传。
3. Driver还原操作经过反序列化HeaderBlock、读取HeaderBlock、下载、解密、解压、解包。
4. 远程查询以及删除使用Catalog类实现。
