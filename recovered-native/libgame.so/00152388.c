/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152388  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSmoke::initWithTotalParticles(unsigned int) */

bool __thiscall cocos2d::CCParticleSmoke::initWithTotalParticles(CCParticleSmoke *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_001524d0;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_30;
    *(undefined4 *)(this + 0x10c) = local_2c;
    uVar2 = DAT_001524d4;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar2;
    *(undefined4 *)(this + 0x114) = DAT_001524d8;
    *(undefined4 *)(this + 0x170) = DAT_001524dc;
    *(undefined4 *)(this + 0x174) = DAT_001524e0;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    uVar4 = __mulsf3(local_38,0x3f000000);
    CCPoint::CCPoint(aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    uVar4 = (*pcVar3)(this,aCStack_28);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    *(undefined4 *)(this + 0x160) = local_20;
    *(undefined4 *)(this + 0x164) = local_1c;
    *(undefined4 *)(this + 0x168) = 0x40800000;
    uVar2 = DAT_001524d8;
    *(undefined4 *)(this + 0x178) = DAT_001524e8;
    *(undefined4 *)(this + 0x16c) = 0x3f800000;
    *(undefined4 *)(this + 0x17c) = uVar2;
    *(undefined4 *)(this + 0x180) = DAT_001524d0;
    uVar2 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar2 = __mulsf3(uVar2,0x3e800000);
    *(undefined4 *)(this + 0x1d8) = uVar2;
    uVar2 = DAT_001524ec;
    *(undefined4 *)(this + 0x188) = DAT_001524ec;
    *(undefined4 *)(this + 0x18c) = uVar2;
    *(undefined4 *)(this + 400) = uVar2;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    uVar2 = DAT_001524f0;
    *(undefined4 *)(this + 0x198) = DAT_001524f0;
    *(undefined4 *)(this + 0x19c) = uVar2;
    *(undefined4 *)(this + 0x1a0) = uVar2;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0x3f800000;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    (**(code **)(*(int *)this + 0x214))(this,0);
  }
  return iVar1 != 0;
}


