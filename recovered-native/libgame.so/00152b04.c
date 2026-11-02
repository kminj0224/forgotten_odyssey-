/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152b04  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleGalaxy::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleGalaxy::initWithTotalParticles(CCParticleGalaxy *this,uint param_1)

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
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_00152c64;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar2 = DAT_00152c6c;
    uVar4 = DAT_00152c68;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar4;
    uVar4 = DAT_00152c70;
    *(undefined4 *)(this + 0x114) = uVar2;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x120) = uVar4;
    *(undefined4 *)(this + 0x118) = DAT_00152c74;
    *(undefined4 *)(this + 0x170) = DAT_00152c78;
    *(undefined4 *)(this + 0x174) = DAT_00152c7c;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar5 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar3)(this,aCStack_20);
    uVar4 = *(undefined4 *)(DAT_00152c80 + 0x152ba6);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(DAT_00152c80 + 0x152ba2);
    *(undefined4 *)(this + 0x164) = uVar4;
    *(undefined4 *)(this + 0x168) = 0x40800000;
    uVar2 = DAT_00152c6c;
    uVar4 = DAT_00152c64;
    *(undefined4 *)(this + 0x178) = DAT_00152c84;
    *(undefined4 *)(this + 0x16c) = 0x3f800000;
    *(undefined4 *)(this + 0x17c) = uVar2;
    *(undefined4 *)(this + 0x180) = uVar4;
    uVar4 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar2 = __mulsf3(uVar4,0x3e800000);
    uVar4 = DAT_00152c88;
    *(undefined4 *)(this + 0x1d8) = uVar2;
    *(undefined4 *)(this + 0x188) = uVar4;
    *(undefined4 *)(this + 0x18c) = 0x3e800000;
    *(undefined4 *)(this + 400) = DAT_00152c8c;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0x3f800000;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    (**(code **)(*(int *)this + 0x214))(this,1);
  }
  return iVar1 != 0;
}


