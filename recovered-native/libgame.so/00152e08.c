/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152e08  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleFireworks::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleFireworks::initWithTotalParticles(CCParticleFireworks *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
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
    *(undefined4 *)(this + 0x154) = DAT_00152f44;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar3 = DAT_00152f4c;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar3;
    *(undefined4 *)(this + 0x114) = DAT_00152f50;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar4 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar5 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar4)(this,aCStack_20);
    uVar3 = DAT_00152f58;
    *(undefined4 *)(this + 0x170) = DAT_00152f54;
    uVar2 = DAT_00152f5c;
    *(undefined4 *)(this + 0x168) = uVar3;
    *(undefined4 *)(this + 0x174) = uVar2;
    *(undefined4 *)(this + 0x16c) = 0x3f800000;
    uVar2 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar3 = __divsf3(uVar2,uVar3);
    *(undefined4 *)(this + 0x1d8) = uVar3;
    *(undefined4 *)(this + 0x188) = 0x3f000000;
    *(undefined4 *)(this + 0x18c) = 0x3f000000;
    *(undefined4 *)(this + 400) = 0x3f000000;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0x3f000000;
    *(undefined4 *)(this + 0x19c) = 0x3f000000;
    *(undefined4 *)(this + 0x1a0) = 0x3f000000;
    uVar3 = DAT_00152f60;
    *(undefined4 *)(this + 0x1a4) = DAT_00152f60;
    *(undefined4 *)(this + 0x1a8) = uVar3;
    *(undefined4 *)(this + 0x1ac) = uVar3;
    *(undefined4 *)(this + 0x1b0) = uVar3;
    uVar2 = DAT_00152f64;
    *(undefined4 *)(this + 0x1b4) = DAT_00152f64;
    *(undefined4 *)(this + 0x1b8) = uVar3;
    *(undefined4 *)(this + 0x1bc) = uVar3;
    *(undefined4 *)(this + 0x1c0) = uVar3;
    *(undefined4 *)(this + 0x1c4) = uVar2;
    *(undefined4 *)(this + 0x178) = 0x41000000;
    *(undefined4 *)(this + 0x17c) = 0x40000000;
    *(undefined4 *)(this + 0x180) = DAT_00152f44;
    (**(code **)(*(int *)this + 0x214))(this,0);
  }
  return iVar1 != 0;
}


