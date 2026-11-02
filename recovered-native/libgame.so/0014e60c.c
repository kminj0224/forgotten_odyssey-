/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e60c  Symbol: unselected */

/* cocos2d::CCMenuItemLabel::unselected() */

void __thiscall cocos2d::CCMenuItemLabel::unselected(CCMenuItemLabel *this)

{
  int iVar1;
  CCAction *pCVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_0014e640;
  if (this[0xfd] != (CCMenuItemLabel)0x0) {
    CCMenuItem::unselected((CCMenuItem *)this);
    uVar3 = CCNode::stopActionByTag((CCNode *)this,iVar1);
    pCVar2 = (CCAction *)
             CCScaleTo::actionWithDuration((float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    *(int *)(pCVar2 + 0x1c) = iVar1;
    CCNode::runAction((CCNode *)this,pCVar2);
  }
  return;
}


