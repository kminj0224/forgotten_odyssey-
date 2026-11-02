/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144cc4  Symbol: popScene */

/* cocos2d::CCDirector::popScene() */

void __thiscall cocos2d::CCDirector::popScene(CCDirector *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x50);
  if (*(int *)(iVar4 + 0x18) != *(int *)(iVar4 + 0x14)) {
    CCObject::release(*(CCObject **)(*(int *)(iVar4 + 0x18) + -4));
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + -4;
  }
  iVar2 = *(int *)(this + 0x50);
  iVar4 = *(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 2;
  if (iVar4 == 0) {
    end(this);
  }
  else {
    this[0x4c] = (CCDirector)0x1;
    uVar1 = iVar4 - 1;
    uVar3 = 0;
    if (uVar1 < (uint)(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 2)) {
      uVar3 = *(undefined4 *)(uVar1 * 4 + *(int *)(iVar2 + 0x14));
    }
    *(undefined4 *)(this + 0x48) = uVar3;
  }
  return;
}


