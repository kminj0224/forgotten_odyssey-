/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160c5c  Symbol: initWithPVRFile */

/* cocos2d::CCTexture2D::initWithPVRFile(char const*) */

int __thiscall cocos2d::CCTexture2D::initWithPVRFile(CCTexture2D *this,char *param_1)

{
  int *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  this_00 = (int *)operator_new(0xb0);
  CCTexturePVR::CCTexturePVR((CCTexturePVR *)this_00);
  iVar1 = CCTexturePVR::initWithContentsOfFile((CCTexturePVR *)this_00,param_1);
  if (iVar1 != 0) {
    (**(code **)(*this_00 + 0x2c))(this_00,1);
    uVar2 = (**(code **)(*this_00 + 0x14))(this_00);
    *(undefined4 *)(this + 0x20) = uVar2;
    *(undefined4 *)(this + 0x2c) = 0x3f800000;
    *(undefined4 *)(this + 0x30) = 0x3f800000;
    uVar2 = (**(code **)(*this_00 + 0x18))(this_00);
    *(undefined4 *)(this + 0x18) = uVar2;
    uVar2 = (**(code **)(*this_00 + 0x1c))(this_00);
    *(undefined4 *)(this + 0x1c) = uVar2;
    __floatunsisf(*(undefined4 *)(this + 0x18));
    uVar3 = __floatunsisf(uVar2);
    CCSize::CCSize((CCSize *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    *(undefined4 *)(this + 0x24) = local_20;
    *(undefined4 *)(this + 0x28) = local_1c;
    this[0x34] = *(CCTexture2D *)(DAT_00160cf8 + 0x160cda);
    uVar2 = (**(code **)(*this_00 + 0x20))(this_00);
    *(undefined4 *)(this + 0x14) = uVar2;
    setAntiAliasTexParameters(this);
    CCObject::release((CCObject *)this_00);
  }
  return iVar1;
}


