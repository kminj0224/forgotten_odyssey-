/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ed68  Symbol: Set_Effect2 */

/* New_UI::Set_Effect2() */

void __thiscall New_UI::Set_Effect2(New_UI *this)

{
  CCNode *this_00;
  CCAction *pCVar1;
  float extraout_s0;
  
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  pCVar1 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(extraout_s0);
  cocos2d::CCNode::runAction(this_00,pCVar1);
  return;
}


