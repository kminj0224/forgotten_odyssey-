/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154b04  Symbol: updateQuadWithParticle */

/* cocos2d::CCParticleSystemPoint::updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint
   const&) */

void __thiscall
cocos2d::CCParticleSystemPoint::updateQuadWithParticle
          (CCParticleSystemPoint *this,sCCParticle *param_1,CCPoint *param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  CCPoint CVar5;
  CCPoint *pCVar6;
  int iVar7;
  
  pCVar6 = (CCPoint *)(*(int *)(this + 0x1fc) + *(int *)(this + 0x148) * 0x10);
  CVar5 = param_2[1];
  *pCVar6 = *param_2;
  pCVar6[1] = CVar5;
  *(undefined4 *)(*(int *)(this + 0x1fc) + *(int *)(this + 0x148) * 0x10 + 0xc) =
       *(undefined4 *)(param_1 + 0x30);
  __mulsf3(*(undefined4 *)(param_1 + 0x14),DAT_00154b94);
  uVar1 = __fixunssfsi();
  __mulsf3(*(undefined4 *)(param_1 + 0x18),DAT_00154b94);
  uVar2 = __fixunssfsi();
  __mulsf3(*(undefined4 *)(param_1 + 0x1c),DAT_00154b94);
  uVar3 = __fixunssfsi();
  iVar7 = *(int *)(this + 0x1fc) + *(int *)(this + 0x148) * 0x10;
  __mulsf3(*(undefined4 *)(param_1 + 0x10),DAT_00154b94);
  uVar4 = __fixunssfsi();
  *(undefined *)(iVar7 + 8) = uVar4;
  *(undefined *)(iVar7 + 9) = uVar1;
  *(undefined *)(iVar7 + 10) = uVar2;
  *(undefined *)(iVar7 + 0xb) = uVar3;
  return;
}


