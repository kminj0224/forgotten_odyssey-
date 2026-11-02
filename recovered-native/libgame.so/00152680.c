/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152680  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSpiral::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleSpiral::initWithTotalParticles(CCParticleSpiral *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  uVar2 = DAT_001527d0;
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_001527d0;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar4 = DAT_001527d4;
    *(undefined4 *)(this + 0x114) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar4;
    uVar4 = DAT_001527d8;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x120) = uVar4;
    *(undefined4 *)(this + 0x118) = DAT_001527dc;
    *(undefined4 *)(this + 0x170) = DAT_001527e0;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar5 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar3)(this,aCStack_20);
    uVar4 = *(undefined4 *)(DAT_001527e4 + 0x15271e);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(DAT_001527e4 + 0x15271a);
    *(undefined4 *)(this + 0x164) = uVar4;
    uVar4 = DAT_001527e8;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined4 *)(this + 0x168) = uVar4;
    *(undefined4 *)(this + 0x178) = DAT_001527ec;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = uVar2;
    uVar2 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar2 = __divsf3(uVar2,DAT_001527e8);
    *(undefined4 *)(this + 0x1d8) = uVar2;
    *(undefined4 *)(this + 0x188) = 0x3f000000;
    *(undefined4 *)(this + 0x18c) = 0x3f000000;
    *(undefined4 *)(this + 400) = 0x3f000000;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0x3f000000;
    *(undefined4 *)(this + 0x19c) = 0x3f000000;
    *(undefined4 *)(this + 0x1a0) = 0x3f000000;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0x3f000000;
    *(undefined4 *)(this + 0x1ac) = 0x3f000000;
    *(undefined4 *)(this + 0x1b0) = 0x3f000000;
    *(undefined4 *)(this + 0x1b4) = 0x3f800000;
    *(undefined4 *)(this + 0x1b8) = 0x3f000000;
    *(undefined4 *)(this + 0x1bc) = 0x3f000000;
    *(undefined4 *)(this + 0x1c0) = 0x3f000000;
    *(undefined4 *)(this + 0x1c4) = 0;
    (**(code **)(*(int *)this + 0x214))(this,0);
  }
  return iVar1 != 0;
}


