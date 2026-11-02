/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a604  Symbol: initWithBatchNode */

/* cocos2d::CCSprite::initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect const&) */

int __thiscall
cocos2d::CCSprite::initWithBatchNode(CCSprite *this,CCSpriteBatchNode *param_1,CCRect *param_2)

{
  CCTexture2D *pCVar1;
  int iVar2;
  
  pCVar1 = (CCTexture2D *)(**(code **)(*(int *)param_1 + 0xe8))(param_1);
  iVar2 = initWithTexture(this,pCVar1,param_2);
  if (iVar2 != 0) {
    useBatchNode(this,param_1);
    iVar2 = 1;
  }
  return iVar2;
}


