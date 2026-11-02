/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014512c  Symbol: setContentScaleFactor */

/* cocos2d::CCDirector::setContentScaleFactor(float) */

undefined8 __thiscall cocos2d::CCDirector::setContentScaleFactor(CCDirector *this,float param_1)

{
  int iVar1;
  undefined4 in_r1;
  undefined8 uVar2;
  CCDirector *local_18;
  undefined4 local_14;
  
  local_18 = this;
  local_14 = in_r1;
  iVar1 = __aeabi_fcmpeq(in_r1,*(undefined4 *)(this + 0x74));
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x74) = in_r1;
    __mulsf3(in_r1,*(undefined4 *)(this + 100));
    uVar2 = __mulsf3(in_r1,*(undefined4 *)(this + 0x68));
    CCSize::CCSize((CCSize *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    *(CCDirector **)(this + 0x6c) = local_18;
    *(undefined4 *)(this + 0x70) = local_14;
    if (*(int *)(this + 0x14) != 0) {
      updateContentScaleFactor(this);
    }
    setProjection(this,*(ccDirectorProjection *)(this + 0x60));
  }
  return CONCAT44(local_14,local_18);
}


