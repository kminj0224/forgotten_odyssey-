/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b848  Symbol: batchNodeWithFile */

/* cocos2d::CCSpriteBatchNode::batchNodeWithFile(char const*) */

int * cocos2d::CCSpriteBatchNode::batchNodeWithFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  memset(this,0,0x110);
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_0015b890 + 0x15b870);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x108;
  initWithFile((CCSpriteBatchNode *)this,param_1,0x1d);
  CCObject::autorelease((CCObject *)this);
  return this;
}


