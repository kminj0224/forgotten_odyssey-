/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154f5c  Symbol: updateQuadWithParticle */

/* cocos2d::CCParticleSystemQuad::updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint
   const&) */

void __thiscall
cocos2d::CCParticleSystemQuad::updateQuadWithParticle
          (CCParticleSystemQuad *this,sCCParticle *param_1,CCPoint *param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  CCPoint CVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CCPoint CVar12;
  CCPoint CVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  float __x;
  float __x_00;
  
  puVar14 = (undefined4 *)(*(int *)(this + 0x1fc) + *(int *)(this + 0x148) * 0x50);
  __mulsf3(*(undefined4 *)(param_1 + 0x10),DAT_0015512c);
  uVar1 = __fixunssfsi();
  __mulsf3(*(undefined4 *)(param_1 + 0x14),DAT_0015512c);
  uVar2 = __fixunssfsi();
  __mulsf3(*(undefined4 *)(param_1 + 0x18),DAT_0015512c);
  uVar3 = __fixunssfsi();
  __mulsf3(*(undefined4 *)(param_1 + 0x1c),DAT_0015512c);
  uVar4 = __fixunssfsi();
  *(undefined *)((int)puVar14 + 9) = uVar2;
  *(undefined *)((int)puVar14 + 0x1d) = uVar2;
  *(undefined *)((int)puVar14 + 10) = uVar3;
  *(undefined *)((int)puVar14 + 0x1e) = uVar3;
  *(undefined *)(puVar14 + 2) = uVar1;
  *(undefined *)((int)puVar14 + 0xb) = uVar4;
  *(undefined *)(puVar14 + 7) = uVar1;
  *(undefined *)((int)puVar14 + 0x1f) = uVar4;
  *(undefined *)((int)puVar14 + 0x31) = uVar2;
  *(undefined *)((int)puVar14 + 0x32) = uVar3;
  *(undefined *)(puVar14 + 0xc) = uVar1;
  *(undefined *)((int)puVar14 + 0x33) = uVar4;
  *(undefined *)(puVar14 + 0x11) = uVar1;
  *(undefined *)((int)puVar14 + 0x45) = uVar2;
  *(undefined *)((int)puVar14 + 0x47) = uVar4;
  *(undefined *)((int)puVar14 + 0x46) = uVar3;
  CVar5 = __mulsf3(*(undefined4 *)(param_1 + 0x30),0x3f000000);
  uVar15 = *(undefined4 *)(param_1 + 0x38);
  iVar6 = __aeabi_fcmpeq(uVar15,0);
  if (iVar6 == 0) {
    CVar12 = *param_2;
    CVar13 = param_2[1];
    iVar7 = __mulsf3(uVar15,DAT_00155130);
    iVar7 = iVar7 + -0x80000000;
    iVar6 = iVar7;
    __x_00 = cosf(__x);
    sinf(__x_00);
    uVar15 = __mulsf3(CVar5 + 0x80000000,iVar6);
    uVar8 = __mulsf3(CVar5 + 0x80000000,iVar7);
    uVar9 = __mulsf3(CVar5,iVar6);
    uVar10 = __mulsf3(CVar5,iVar7);
    uVar11 = __subsf3(uVar15,uVar8);
    uVar11 = __addsf3(uVar11,CVar12);
    *puVar14 = uVar11;
    uVar11 = __addsf3(uVar8,uVar15);
    uVar11 = __addsf3(uVar11,CVar13);
    puVar14[1] = uVar11;
    uVar11 = __subsf3(uVar9,uVar8);
    uVar11 = __addsf3(uVar11,CVar12);
    puVar14[5] = uVar11;
    uVar11 = __addsf3(uVar10,uVar15);
    uVar11 = __addsf3(uVar11,CVar13);
    puVar14[6] = uVar11;
    uVar15 = __subsf3(uVar15,uVar10);
    uVar15 = __addsf3(uVar15,CVar12);
    puVar14[10] = uVar15;
    uVar15 = __addsf3(uVar8,uVar9);
    uVar15 = __addsf3(uVar15,CVar13);
    puVar14[0xb] = uVar15;
    uVar15 = __subsf3(uVar9,uVar10);
    uVar15 = __addsf3(uVar15,CVar12);
    puVar14[0xf] = uVar15;
    CVar12 = __addsf3(uVar10,uVar9);
    CVar5 = CVar13;
  }
  else {
    uVar15 = __subsf3(*param_2,CVar5);
    *puVar14 = uVar15;
    uVar15 = __subsf3(param_2[1],CVar5);
    puVar14[1] = uVar15;
    uVar15 = __addsf3(*param_2,CVar5);
    puVar14[5] = uVar15;
    uVar15 = __subsf3(param_2[1],CVar5);
    puVar14[6] = uVar15;
    uVar15 = __subsf3(*param_2,CVar5);
    puVar14[10] = uVar15;
    uVar15 = __addsf3(param_2[1],CVar5);
    puVar14[0xb] = uVar15;
    uVar15 = __addsf3(*param_2,CVar5);
    puVar14[0xf] = uVar15;
    CVar12 = param_2[1];
  }
  uVar15 = __addsf3(CVar12,CVar5);
  puVar14[0x10] = uVar15;
  return;
}


