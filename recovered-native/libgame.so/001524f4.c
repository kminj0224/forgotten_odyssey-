/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001524f4  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleExplosion::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleExplosion::initWithTotalParticles(CCParticleExplosion *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar2 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  uVar1 = DAT_00152650;
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_00152650;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar5 = DAT_00152654;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar5;
    uVar5 = DAT_00152658;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x114) = uVar5;
    *(undefined4 *)(this + 0x170) = DAT_0015265c;
    *(undefined4 *)(this + 0x174) = DAT_00152660;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar4 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar6 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    (*pcVar4)(this,aCStack_20);
    uVar5 = *(undefined4 *)(DAT_00152664 + 0x152592);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(DAT_00152664 + 0x15258e);
    *(undefined4 *)(this + 0x164) = uVar5;
    uVar5 = DAT_0015266c;
    *(undefined4 *)(this + 0x168) = DAT_00152668;
    *(undefined4 *)(this + 0x16c) = 0x40000000;
    *(undefined4 *)(this + 0x178) = DAT_00152670;
    *(undefined4 *)(this + 0x17c) = uVar5;
    *(undefined4 *)(this + 0x180) = DAT_00152674;
    uVar5 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar3 = __divsf3(uVar5,*(undefined4 *)(this + 0x154));
    uVar5 = DAT_00152678;
    *(undefined4 *)(this + 0x1d8) = uVar3;
    *(undefined4 *)(this + 0x188) = uVar5;
    uVar5 = DAT_0015267c;
    *(undefined4 *)(this + 0x18c) = uVar1;
    *(undefined4 *)(this + 400) = uVar5;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0x3f000000;
    *(undefined4 *)(this + 0x19c) = 0x3f000000;
    *(undefined4 *)(this + 0x1a0) = 0x3f000000;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0x3f000000;
    *(undefined4 *)(this + 0x1ac) = 0x3f000000;
    *(undefined4 *)(this + 0x1b0) = 0x3f000000;
    *(undefined4 *)(this + 0x1b4) = 0;
    *(undefined4 *)(this + 0x1b8) = 0x3f000000;
    *(undefined4 *)(this + 0x1bc) = 0x3f000000;
    *(undefined4 *)(this + 0x1c0) = 0x3f000000;
    *(undefined4 *)(this + 0x1c4) = 0;
    (**(code **)(*(int *)this + 0x214))(this,0);
  }
  return iVar2 != 0;
}


