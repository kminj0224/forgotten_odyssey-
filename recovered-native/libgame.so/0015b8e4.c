/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b8e4  Symbol: batchNodeWithTexture */

/* cocos2d::CCSpriteBatchNode::batchNodeWithTexture(cocos2d::CCTexture2D*, unsigned int) */

int * cocos2d::CCSpriteBatchNode::batchNodeWithTexture(CCTexture2D *param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  memset(this,0,0x110);
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_0015b930 + 0x15b90e);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x108;
  initWithTexture((CCSpriteBatchNode *)this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


