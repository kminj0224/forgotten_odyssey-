/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3274  Symbol: Draw_Kai_Tree */

/* SkillTreeLayer::Draw_Kai_Tree(int) */

void __thiscall SkillTreeLayer::Draw_Kai_Tree(SkillTreeLayer *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  CCTexture2D *pCVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  code *pcVar13;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar14;
  int local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 *local_c8;
  int local_c4;
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  iVar1 = DAT_000d3508 + 0xd3282;
  piVar12 = *(int **)(iVar1 + DAT_000d350c);
  local_1c = *piVar12;
  if (param_1 == 1) {
    local_d4 = 0;
  }
  else if (param_1 == 2) {
    local_d4 = 0xb;
  }
  else if (param_1 == 3) {
    local_d4 = 0x16;
  }
  else if (param_1 == 4) {
    local_d4 = 0x21;
  }
  else {
    if (param_1 != 5) goto LAB_000d34f6;
    local_d4 = 0x2c;
  }
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d3510 + 0xd32c2));
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d3514 + 0xd32cc));
  pcVar13 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a8,extraout_s0,extraout_s1);
  (*pcVar13)(piVar3,aCStack_a8);
  (**(code **)(*(int *)this + 0xcc))(this,piVar3,99,99);
  local_d0 = 0;
  local_c4 = 0x76;
  do {
    local_e0 = local_d0;
    local_c8 = (undefined4 *)((local_d0 + local_d4) * 0x10 + *(int *)(iVar1 + DAT_000d3538));
    local_cc = 0x18;
    piVar3 = *(int **)(iVar1 + DAT_000d353c);
    do {
      piVar9 = *(int **)(iVar1 + DAT_000d351c);
      if (local_e0 == 0xb) {
        pCVar4 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
        piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        __floatsisf(local_cc);
        uVar14 = __floatsisf(local_c4);
        cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar13)(piVar5,aCStack_a0);
        (**(code **)(*(int *)this + 0xcc))(this,piVar5,0xb,0xb);
        sprintf(acStack_80,(char *)(DAT_000d3524 + 0xd3368),
                *(undefined4 *)(*(int *)(iVar1 + DAT_000d3520) + (param_1 + -1) * 0x20 + 4));
        piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_80);
        pcVar13 = *(code **)(*piVar6 + 0x3c);
        puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
        __mulsf3(*puVar7,0x3f000000);
        iVar8 = (**(code **)(*piVar5 + 0x7c))(piVar5);
        uVar14 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar13)(piVar6,aCStack_98);
        pcVar10 = (char *)(*piVar3 + param_1 * 0xc + *piVar9 * 0x6c + DAT_000d3528);
      }
      else {
        pCVar4 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        __floatsisf(local_cc);
        uVar14 = __floatsisf(local_c4);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar13)(piVar5,aCStack_90);
        (**(code **)(*(int *)this + 0xcc))(this,piVar5,local_e0,local_e0);
        if (local_e0 < 4) {
          pcVar10 = (char *)(DAT_000d352c + 0xd341a);
          uVar11 = *local_c8;
        }
        else {
          uVar11 = *local_c8;
          pcVar10 = (char *)(DAT_000d3530 + 0xd3426);
        }
        sprintf(acStack_80,pcVar10,uVar11);
        piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_80);
        pcVar13 = *(code **)(*piVar6 + 0x3c);
        puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
        __mulsf3(*puVar7,0x3f000000);
        iVar8 = (**(code **)(*piVar5 + 0x7c))(piVar5);
        uVar14 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar13)(piVar6,aCStack_88);
        pcVar10 = (char *)(*piVar3 + *piVar9 * 0x6c + param_1 * 0xc + local_e0 + DAT_000d3534);
      }
      if (*pcVar10 == '\0') {
        (**(code **)(*piVar6 + 0xec))(piVar6,0x7f);
      }
      (**(code **)(*piVar5 + 0xcc))(piVar5,piVar6,0,0);
      local_e0 = local_e0 + 1;
      local_c8 = local_c8 + 4;
      local_cc = local_cc + 0x30;
    } while (local_cc != 0xd8);
    local_d0 = local_d0 + 4;
    local_c4 = local_c4 + -0x2d;
  } while (local_d0 != 0xc);
LAB_000d34f6:
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


