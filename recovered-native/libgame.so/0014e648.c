/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e648  Symbol: selected */

/* cocos2d::CCMenuItemLabel::selected() */

void __thiscall cocos2d::CCMenuItemLabel::selected(CCMenuItemLabel *this)

{
  int iVar1;
  undefined4 uVar2;
  CCAction *pCVar3;
  undefined8 uVar4;
  
  if (this[0xfd] != (CCMenuItemLabel)0x0) {
    CCMenuItem::selected((CCMenuItem *)this);
    iVar1 = CCNode::getActionByTag((CCNode *)this,DAT_0014e69c);
    if (iVar1 == 0) {
      uVar2 = CCNode::getScale((CCNode *)this);
      *(undefined4 *)(this + 0x120) = uVar2;
    }
    else {
      CCNode::stopAction((CCAction *)this);
    }
    uVar4 = __mulsf3(*(undefined4 *)(this + 0x120),DAT_0014e6a0);
    pCVar3 = (CCAction *)
             CCScaleTo::actionWithDuration((float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    *(int *)(pCVar3 + 0x1c) = DAT_0014e69c;
    CCNode::runAction((CCNode *)this,pCVar3);
  }
  return;
}


