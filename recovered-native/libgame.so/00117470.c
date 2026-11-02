/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00117470  Symbol: setNormal_Monster_State */

/* setNormal_Monster_State(int, _Unit_Stage*) */

void setNormal_Monster_State(int param_1,_Unit_Stage *param_2)

{
  _KG_Unit_State *this;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CCNode *pCVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  float extraout_s0;
  float extraout_s1;
  undefined auStack_130 [4];
  undefined auStack_12c [4];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined auStack_e4 [4];
  undefined auStack_e0 [4];
  undefined auStack_dc [4];
  undefined auStack_d8 [4];
  undefined auStack_d4 [4];
  undefined auStack_d0 [4];
  undefined auStack_cc [4];
  undefined auStack_c8 [4];
  undefined auStack_c4 [4];
  undefined auStack_c0 [4];
  undefined auStack_bc [4];
  undefined auStack_b8 [4];
  undefined auStack_b4 [4];
  undefined auStack_b0 [4];
  undefined auStack_ac [4];
  undefined auStack_a8 [4];
  undefined auStack_a4 [4];
  undefined auStack_a0 [4];
  undefined auStack_9c [4];
  undefined auStack_98 [4];
  undefined auStack_94 [4];
  undefined auStack_90 [4];
  undefined auStack_8c [4];
  undefined auStack_88 [4];
  undefined auStack_84 [4];
  undefined auStack_80 [4];
  undefined auStack_7c [4];
  undefined auStack_78 [4];
  undefined auStack_74 [4];
  undefined auStack_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  undefined auStack_64 [4];
  undefined auStack_60 [4];
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  undefined auStack_54 [4];
  CCPoint local_50;
  int local_4c;
  char acStack_48 [12];
  char acStack_3c [32];
  int local_1c;
  
  iVar5 = DAT_00117850 + 0x11747e;
  piVar8 = *(int **)(iVar5 + DAT_00117854);
  local_1c = *piVar8;
  this = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this);
  *(_KG_Unit_State **)(param_2 + 4) = this;
  Init_Unit_Stage(param_2);
  FUN_001eed40(auStack_12c,*(undefined4 *)(iVar5 + DAT_00117858),auStack_130);
  local_128 = *(int *)(iVar5 + DAT_0011785c) + 0xc;
  local_124 = local_128;
  local_120 = local_128;
  local_11c = local_128;
  local_118 = local_128;
  local_114 = local_128;
  local_110 = local_128;
  local_10c = local_128;
  local_108 = local_128;
  local_104 = local_128;
  local_100 = local_128;
  local_fc = local_128;
  local_f8 = local_128;
  local_f4 = local_128;
  local_f0 = local_128;
  local_ec = local_128;
  local_e8 = local_128;
  sprintf(acStack_48,(char *)(DAT_00117860 + 0x1174bc),param_1);
  pcVar1 = (char *)FUN_001ece40(auStack_12c,acStack_48,0);
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_00117b2c + 0x117a74));
  }
  pcVar9 = (char *)(DAT_00117864 + 0x1174fe);
  iVar2 = FUN_001ece40(auStack_12c,pcVar9,0);
  FUN_001eebe0(auStack_e4,auStack_12c,pcVar1,iVar2 - (int)pcVar1);
  FUN_001ee874(&local_128,auStack_e4);
  FUN_001ed6b8(auStack_e4);
  FUN_001ee80c(auStack_e0,auStack_12c);
  FUN_001ee80c(auStack_dc,&local_124);
  pcVar10 = (char *)(DAT_00117868 + 0x117538);
  setStatePoint((basic_string)auStack_d8,(basic_string)auStack_e0,(int)auStack_dc,pcVar1,pcVar9);
  FUN_001ee874(&local_124,auStack_d8);
  FUN_001ed6b8(auStack_d8);
  FUN_001ed6b8(auStack_dc);
  FUN_001ed6b8(auStack_e0);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_124);
  uVar3 = __fixdfsi();
  *(undefined4 *)(iVar2 + 8) = uVar3;
  iVar2 = *(int *)(param_2 + 4);
  Get_Monster_attack(6);
  uVar3 = __floatsisf();
  *(undefined4 *)(iVar2 + 0x38) = uVar3;
  iVar2 = *(int *)(param_2 + 4);
  Get_Monster_HP(6);
  uVar3 = __floatsisf();
  *(undefined4 *)(iVar2 + 0x28) = uVar3;
  iVar2 = *(int *)(param_2 + 4);
  Get_Monster_HP(6);
  uVar3 = __floatsisf();
  *(undefined4 *)(iVar2 + 0x24) = uVar3;
  FUN_001ee80c(auStack_d4,auStack_12c);
  FUN_001ee80c(auStack_d0,&local_120);
  pcVar9 = (char *)(DAT_0011786c + 0x1175ae);
  setStatePoint((basic_string)auStack_cc,(basic_string)auStack_d4,(int)auStack_d0,pcVar1,pcVar10);
  FUN_001ee874(&local_120,auStack_cc);
  FUN_001ed6b8(auStack_cc);
  FUN_001ed6b8(auStack_d0);
  FUN_001ed6b8(auStack_d4);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_120);
  uVar3 = __truncdfsf2();
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  FUN_001ee80c(auStack_c8,auStack_12c);
  FUN_001ee80c(auStack_c4,&local_11c);
  pcVar10 = (char *)(DAT_00117870 + 0x1175fa);
  setStatePoint((basic_string)auStack_c0,(basic_string)auStack_c8,(int)auStack_c4,pcVar1,pcVar9);
  FUN_001ee874(&local_11c,auStack_c0);
  FUN_001ed6b8(auStack_c0);
  FUN_001ed6b8(auStack_c4);
  FUN_001ed6b8(auStack_c8);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_11c);
  uVar3 = __truncdfsf2();
  *(undefined4 *)(iVar2 + 0x58) = uVar3;
  FUN_001ee80c(auStack_bc,auStack_12c);
  FUN_001ee80c(auStack_b8,&local_118);
  pcVar9 = (char *)(DAT_00117874 + 0x117646);
  setStatePoint((basic_string)auStack_b4,(basic_string)auStack_bc,(int)auStack_b8,pcVar1,pcVar10);
  FUN_001ee874(&local_118,auStack_b4);
  FUN_001ed6b8(auStack_b4);
  FUN_001ed6b8(auStack_b8);
  FUN_001ed6b8(auStack_bc);
  FUN_001ee80c(auStack_b0,auStack_12c);
  FUN_001ee80c(auStack_ac,&local_114);
  setStatePoint((basic_string)auStack_a8,(basic_string)auStack_b0,(int)auStack_ac,pcVar1,pcVar9);
  FUN_001ee874(&local_114,auStack_a8);
  FUN_001ed6b8(auStack_a8);
  FUN_001ed6b8(auStack_ac);
  FUN_001ed6b8(auStack_b0);
  FUN_001ee80c(auStack_a4,auStack_12c);
  FUN_001ee80c(auStack_a0,&local_110);
  pcVar9 = (char *)(DAT_00117880 + 0x1176c2);
  setStatePoint((basic_string)auStack_9c,(basic_string)auStack_a4,(int)auStack_a0,pcVar1,
                (char *)(DAT_0011787c + 0x1176c0));
  FUN_001ee874(&local_110,auStack_9c);
  FUN_001ed6b8(auStack_9c);
  FUN_001ed6b8(auStack_a0);
  FUN_001ed6b8(auStack_a4);
  FUN_001ee80c(auStack_98,auStack_12c);
  FUN_001ee80c(auStack_94,&local_10c);
  pcVar10 = (char *)(DAT_00117884 + 0x117704);
  setStatePoint((basic_string)auStack_90,(basic_string)auStack_98,(int)auStack_94,pcVar1,pcVar9);
  FUN_001ee874(&local_10c,auStack_90);
  FUN_001ed6b8(auStack_90);
  FUN_001ed6b8(auStack_94);
  FUN_001ed6b8(auStack_98);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_10c);
  uVar3 = __truncdfsf2();
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  FUN_001ee80c(auStack_8c,auStack_12c);
  FUN_001ee80c(auStack_88,&local_108);
  pcVar9 = (char *)(DAT_00117888 + 0x117750);
  setStatePoint((basic_string)auStack_84,(basic_string)auStack_8c,(int)auStack_88,pcVar1,pcVar10);
  FUN_001ee874(&local_108,auStack_84);
  FUN_001ed6b8(auStack_84);
  FUN_001ed6b8(auStack_88);
  FUN_001ed6b8(auStack_8c);
  FUN_001ee80c(auStack_80,auStack_12c);
  FUN_001ee80c(auStack_7c,&local_104);
  pcVar10 = (char *)(DAT_0011788c + 0x11778e);
  setStatePoint((basic_string)auStack_78,(basic_string)auStack_80,(int)auStack_7c,pcVar1,pcVar9);
  FUN_001ee874(&local_104,auStack_78);
  FUN_001ed6b8(auStack_78);
  FUN_001ed6b8(auStack_7c);
  FUN_001ed6b8(auStack_80);
  FUN_001ee874(&local_fc,&local_104);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_fc);
  uVar3 = __truncdfsf2();
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  iVar2 = DAT_00117890;
  FUN_001ee80c(auStack_74,auStack_12c);
  FUN_001ee80c(auStack_70,&local_f0);
  setStatePoint((basic_string)auStack_6c,(basic_string)auStack_74,(int)auStack_70,pcVar1,pcVar10);
  FUN_001ee874(&local_f0,auStack_6c);
  FUN_001ed6b8(auStack_6c);
  FUN_001ed6b8(auStack_70);
  FUN_001ed6b8(auStack_74);
  iVar11 = *(int *)(param_2 + 4);
  FUN_001170a8(local_f0);
  uVar3 = __fixdfsi();
  *(undefined4 *)(iVar11 + 0xd8) = uVar3;
  FUN_001ee80c(auStack_68,auStack_12c);
  FUN_001ee80c(auStack_64,&local_ec);
  pcVar9 = (char *)(DAT_00117894 + 0x117830);
  setStatePoint((basic_string)auStack_60,(basic_string)auStack_68,(int)auStack_64,pcVar1,
                (char *)(iVar2 + 0x1177dc));
  FUN_001ee874(&local_ec,auStack_60);
  FUN_001ed6b8(auStack_60);
  FUN_001ed6b8(auStack_64);
  FUN_001ed6b8(auStack_68);
  iVar2 = *(int *)(param_2 + 4);
  FUN_001170a8(local_ec);
  uVar3 = __fixdfsi();
  *(undefined4 *)(iVar2 + 0xdc) = uVar3;
  FUN_001ee80c(auStack_5c,auStack_12c);
  FUN_001ee80c(auStack_58,&local_e8);
  setStatePoint((basic_string)auStack_54,(basic_string)auStack_5c,(int)auStack_58,pcVar1,pcVar9);
  FUN_001ee874(&local_e8,auStack_54);
  FUN_001ed6b8(auStack_54);
  FUN_001ed6b8(auStack_58);
  FUN_001ed6b8(auStack_5c);
  iVar11 = *(int *)(param_2 + 4);
  FUN_001170a8(local_e8);
  uVar3 = __fixdfsi();
  iVar2 = DAT_00117af8;
  *(undefined4 *)(iVar11 + 0xe0) = uVar3;
  if (param_1 != iVar2) {
    *(undefined4 *)(*(int *)(param_2 + 4) + 0xf0) = 3;
  }
  iVar2 = DAT_00117afc;
  iVar11 = 0;
  do {
    iVar6 = *(int *)((iVar11 + 0x36) * 4 + *(int *)(param_2 + 4));
    if (iVar6 == 6) {
      piVar12 = *(int **)(iVar5 + DAT_00117b00);
      if (*(char *)(*piVar12 + 0x36) == '\0') {
        Effect::HEMORRHAGE_Lode_Zombi(*(Effect **)(**(int **)(iVar5 + DAT_00117b04) + iVar2));
        puVar7 = (undefined *)(*piVar12 + 0x36);
        goto LAB_0011798a;
      }
    }
    else if (iVar6 == 10) {
      piVar12 = *(int **)(iVar5 + DAT_00117b00);
      if (*(char *)(*piVar12 + 0x38) == '\0') {
        Effect::INVULNERABILITY_Lode_Zombi(*(Effect **)(**(int **)(iVar5 + DAT_00117b04) + iVar2));
        puVar7 = (undefined *)(*piVar12 + 0x38);
LAB_0011798a:
        *puVar7 = 1;
      }
    }
    else if ((iVar6 == 0xc) &&
            (piVar12 = *(int **)(iVar5 + DAT_00117b00), *(char *)(*piVar12 + 0x37) == '\0')) {
      Effect::CAPTIVATE_Lode_Zombi(*(Effect **)(**(int **)(iVar5 + DAT_00117b04) + iVar2));
      puVar7 = (undefined *)(*piVar12 + 0x37);
      goto LAB_0011798a;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 3);
  if (*(int *)(*(int *)(param_2 + 4) + 8) == 2) {
    memset(acStack_3c,0,0x1e);
    if (param_1 == DAT_00117b08) {
      pcVar1 = (char *)(DAT_00117b0c + 0x1179b8);
      uVar3 = DAT_00117b10;
LAB_001179ca:
      sprintf(acStack_3c,pcVar1,uVar3);
    }
    else {
      if (param_1 == DAT_00117b14) {
        pcVar1 = (char *)(DAT_00117b18 + 0x1179ca);
        uVar3 = 0x1400;
        goto LAB_001179ca;
      }
      sprintf(acStack_3c,(char *)(DAT_00117b1c + 0x1179da),param_1);
      if (param_1 == DAT_00117b20) goto LAB_00117a20;
    }
    pCVar4 = (CCNode *)
             cocos2d::CCNode::getChildByTag
                       (**(CCNode ***)(iVar5 + DAT_00117b04),param_1 + DAT_00117b24);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,extraout_s0,extraout_s1);
    vDrawImage(pCVar4,acStack_3c,local_50,local_4c,0);
LAB_00117a32:
    if (param_1 == DAT_00117af8) goto LAB_00117a76;
  }
  else {
    if (param_1 != DAT_00117b20) goto LAB_00117a32;
LAB_00117a20:
    Effect::Effect_Kris(*(Effect **)(**(int **)(iVar5 + DAT_00117b04) + DAT_00117afc));
  }
  iVar5 = **(int **)(iVar5 + DAT_00117b00);
  iVar2 = 0;
  do {
    iVar11 = *(int *)((iVar2 + 0x36) * 4 + *(int *)(param_2 + 4));
    if (iVar11 == 0xd) {
      *(undefined *)(iVar5 + 0x34) = 1;
    }
    else if (iVar11 == 1) {
      *(undefined *)(iVar5 + 0x35) = 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
LAB_00117a76:
  FUN_001ed6b8(&local_e8);
  FUN_001ed6b8(&local_ec);
  FUN_001ed6b8(&local_f0);
  FUN_001ed6b8(&local_f4);
  FUN_001ed6b8(&local_f8);
  FUN_001ed6b8(&local_fc);
  FUN_001ed6b8(&local_100);
  FUN_001ed6b8(&local_104);
  FUN_001ed6b8(&local_108);
  FUN_001ed6b8(&local_10c);
  FUN_001ed6b8(&local_110);
  FUN_001ed6b8(&local_114);
  FUN_001ed6b8(&local_118);
  FUN_001ed6b8(&local_11c);
  FUN_001ed6b8(&local_120);
  FUN_001ed6b8(&local_124);
  FUN_001ed6b8(&local_128);
  FUN_001ed6b8(auStack_12c);
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


