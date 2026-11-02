/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b0ac  Symbol: updateBlendFunc */

/* cocos2d::CCSprite::updateBlendFunc() */

void __thiscall cocos2d::CCSprite::updateBlendFunc(CCSprite *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  uVar1 = DAT_0015b0f0;
  if ((*(int **)(this + 0x124) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(this + 0x124) + 0x38))(), iVar2 == 0)) {
    *(undefined4 *)(this + 0x11c) = DAT_0015b0f4;
    *(undefined4 *)(this + 0x120) = uVar1;
    uVar3 = 0;
    pcVar4 = *(code **)(*(int *)this + 0x10c);
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(this + 0x11c) = 1;
    *(undefined4 *)(this + 0x120) = uVar1;
    pcVar4 = *(code **)(*(int *)this + 0x10c);
  }
  (*pcVar4)(this,uVar3);
  return;
}


