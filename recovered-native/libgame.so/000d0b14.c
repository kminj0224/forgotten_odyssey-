/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0b14  Symbol: Remove_Text */

/* Item_Text_View_Layer::Remove_Text() */

void __thiscall Item_Text_View_Layer::Remove_Text(Item_Text_View_Layer *this)

{
  int iVar1;
  CCNode *pCVar2;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,6);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,6);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  return;
}


