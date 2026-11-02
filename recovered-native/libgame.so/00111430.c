/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111430  Symbol: bullet_return */

/* bullet_return(cocos2d::CCLayer*) */

void bullet_return(CCLayer *param_1)

{
  int iVar1;
  CCNode *this;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  this = (CCNode *)
         cocos2d::CCNode::getChildByTag
                   (**(CCNode ***)(DAT_00111454 + 0x111442),*(int *)(*(int *)(iVar1 + 4) + 4));
  cocos2d::CCNode::getChildByTag(this,DAT_00111458);
  return;
}


