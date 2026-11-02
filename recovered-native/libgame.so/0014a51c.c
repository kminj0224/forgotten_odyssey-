/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a51c  Symbol: CCScene */

/* cocos2d::CCScene::CCScene() */

undefined8 __thiscall cocos2d::CCScene::CCScene(CCScene *this)

{
  undefined8 uVar1;
  CCScene *apCStack_10 [2];
  
  apCStack_10[0] = this;
  uVar1 = CCNode::CCNode((CCNode *)this);
  *(int *)this = *(int *)(DAT_0014a550 + 0x14a52e) + 8;
  this[0x78] = (CCScene)0x0;
  CCPoint::CCPoint((CCPoint *)apCStack_10,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCNode::setAnchorPoint((CCPoint *)this);
  return CONCAT44(apCStack_10[0],this);
}


