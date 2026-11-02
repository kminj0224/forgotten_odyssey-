/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c0f9c  Symbol: vDrawScript_Unit_Rend */

/* vDrawScript_Unit_Rend(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int) */

void vDrawScript_Unit_Rend
               (char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  uchar uVar4;
  CCLayer *this;
  int **ppiVar5;
  int *piVar6;
  void *pvVar7;
  CCNode *pCVar8;
  CCTextureCache *this_00;
  CCArray *this_01;
  code *pcVar9;
  CCFiniteTimeAction *pCVar10;
  CCPoint CVar11;
  undefined2 extraout_r1;
  CCSize CVar12;
  int iVar13;
  _KG_Animation *p_Var14;
  int iVar15;
  int *piVar16;
  code *pcVar17;
  undefined4 uVar18;
  CCPoint *pCVar19;
  undefined4 *puVar20;
  int iVar21;
  code *pcVar22;
  undefined4 uVar23;
  code **ppcVar24;
  undefined4 uVar25;
  int iVar26;
  int in_r12;
  undefined4 *puVar27;
  undefined4 in_cr15;
  float fVar59;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar60;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar61;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float fVar62;
  float extraout_s2_01;
  float extraout_s2_02;
  int aiStack_c [3];
  undefined4 *puVar28;
  int *piVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  undefined4 *puVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  
  iVar2 = iRam000c1314;
  puVar27 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar28 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  piVar29 = (int *)(&stack0xffffffe4 + iRam000c1314);
  puVar30 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar31 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar32 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar33 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar34 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar35 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar36 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar37 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar38 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar39 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar40 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar41 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar42 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar43 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar44 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar45 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar46 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar47 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar48 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar49 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar50 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar51 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar52 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar53 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar54 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar55 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar56 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar57 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  puVar58 = (undefined4 *)(&stack0xffffffe4 + iRam000c1314);
  *(char **)(&stack0x0000005c + iRam000c1314) = param_2;
  *(CCPoint *)(&stack0x00000240 + iRam000c1314) = param_4;
  puVar20 = *(undefined4 **)(iRam000c1318 + 0xc0fb0);
  *(char **)(&stack0x0000006c + iRam000c1314) = param_1;
  *(undefined4 *)(&stack0x00000220 + iRam000c1314) = *puVar20;
  uVar23 = *(undefined4 *)(&stack0x00000240 + iRam000c1314);
  uVar25 = *(undefined4 *)(&stack0x00000244 + iRam000c1314);
  sprintf(&stack0x00000158 + iRam000c1314,(char *)(iRam000c131c + 0xc0fbc),
          *(undefined4 *)(&stack0x0000006c + iRam000c1314),
          *(undefined4 *)(&stack0x0000005c + iRam000c1314));
  *(int *)(&stack0x00000054 + iVar2) = *(int *)(&stack0x0000024c + iVar2) + 1;
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x00000064 + iVar2) = this;
  uVar60 = cocos2d::CCLayer::CCLayer(this);
  *(undefined4 **)(&stack0x00000078 + iVar2) = puVar20;
  iVar13 = **(int **)(iRam000c1320 + 0xc0fe6);
  *(int **)(&stack0x00000068 + iVar2) = *(int **)(iRam000c1320 + 0xc0fe6);
  if (iVar13 == 2) {
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(**(int **)(&stack0x00000064 + iVar2) + 0x3c);
    __addsf3(uVar23,uVar23);
    uVar60 = __addsf3(uVar25,uVar25);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000080 + iVar2),(float)uVar60,
               (float)((ulonglong)uVar60 >> 0x20));
    (**(code **)(&stack0x00000058 + iVar2))
              (*(undefined4 *)(&stack0x00000064 + iVar2),&stack0x00000080 + iVar2);
  }
  else {
    pcVar17 = *(code **)(**(int **)(&stack0x00000064 + iVar2) + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar2),(float)uVar60,
               (float)((ulonglong)uVar60 >> 0x20));
    (*pcVar17)(*(undefined4 *)(&stack0x00000064 + iVar2),&stack0x00000088 + iVar2);
  }
  (**(code **)(*(int *)param_3 + 0xcc))
            (param_3,*(undefined4 *)(&stack0x00000064 + iVar2),
             *(undefined4 *)(&stack0x00000248 + iVar2),*(undefined4 *)(&stack0x0000024c + iVar2));
  ppiVar5 = (int **)(**(code **)(*(int *)param_3 + 0xa8))(param_3);
  if (*(int *)(&stack0x0000024c + iVar2) == 0) {
    piVar6 = (int *)operator_new(0x2c);
    *ppiVar5 = piVar6;
    piVar6 = (int *)operator_new(0x140);
    _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar6);
    ppiVar5[1] = piVar6;
    Init_Unit_Stage((_Unit_Stage *)ppiVar5);
  }
  piVar6 = *ppiVar5;
  pvVar7 = operator_new(0x298);
  iVar13 = *(int *)(&stack0x0000024c + iVar2);
  piVar6[iVar13] = (int)pvVar7;
  iVar26 = *(int *)(&stack0x00000054 + iVar2);
  (*ppiVar5)[8] = 1;
  (*ppiVar5)[9] = iVar26;
  fVar59 = (float)anim_Lode_copy(&stack0x00000158 + iVar2,(_KG_Anit *)(*ppiVar5)[iVar13],
                                 *(char **)(&stack0x0000005c + iVar2));
  for (iVar13 = *(int *)(&stack0x00000054 + iVar2); iVar13 < 8; iVar13 = iVar13 + 1) {
    (*ppiVar5)[iVar13] = 0;
  }
  iVar13 = 0;
  while( true ) {
    piVar6 = *ppiVar5;
    *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000024c + iVar2) * 4;
    if (*(int *)(*(int *)piVar6[*(int *)(&stack0x0000024c + iVar2)] + 4) <= iVar13) break;
    iVar26 = *piVar6;
    *(int *)(&stack0x00000054 + iVar2) = iVar13 * 4;
    puVar20 = *(undefined4 **)(iVar13 * 4 + iVar26);
    if (puVar20 != (undefined4 *)0x0) {
      *puVar27 = *puVar20;
      sprintf(&stack0x000001bc + iVar2,(char *)(iRam000c1324 + 0xc10c4),
              *(undefined4 *)(&stack0x0000006c + iVar2),iRam000c1328 + 0xc10c6);
      iVar26 = **ppiVar5;
      uVar23 = *(undefined4 *)(iVar26 + 0x284);
      *(undefined4 *)(&stack0x00000058 + iVar2) =
           *(undefined4 *)(*(int *)(&stack0x00000054 + iVar2) + iVar26);
      __floatsisf(uVar23);
      uVar60 = __floatsisf(*(undefined4 *)(iVar26 + 0x280));
      uVar60 = cocos2d::CCSize::CCSize
                         ((CCSize *)(&stack0x00000090 + iVar2),(float)uVar60,
                          (float)((ulonglong)uVar60 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000098 + iVar2),(float)uVar60,
                 (float)((ulonglong)uVar60 >> 0x20));
      iVar26 = **ppiVar5;
      __floatsisf(*(undefined4 *)(iVar26 + 0x288));
      uVar60 = __floatsisf(*(undefined4 *)(iVar26 + 0x28c));
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000a0 + iVar2),(float)uVar60,
                 (float)((ulonglong)uVar60 >> 0x20));
      pCVar8 = *(CCNode **)(&stack0x00000064 + iVar2);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000098 + iVar2);
      p_Var14 = *(_KG_Animation **)(&stack0x00000058 + iVar2);
      *(int *)(&stack0xffffffe8 + iVar2) = iVar13;
      *(undefined4 *)((int)aiStack_c + iVar2) = *(undefined4 *)(&stack0x0000009c + iVar2);
      *(int *)(&stack0xffffffec + iVar2) = iVar13;
      *(undefined4 *)((int)aiStack_c + iVar2 + 4) = *(undefined4 *)(&stack0x000000a0 + iVar2);
      *(undefined4 *)((int)aiStack_c + iVar2 + 8) = *(undefined4 *)(&stack0x000000a4 + iVar2);
      *puVar28 = *(undefined4 *)(&stack0x00000094 + iVar2);
      piVar6 = (int *)vScriptImgDraw_Fram(pCVar8,&stack0x000001bc + iVar2,p_Var14,
                                          *(CCSize *)(&stack0x00000090 + iVar2),*piVar29,
                                          *(int *)(&stack0xffffffe8 + iVar2),
                                          *(CCPoint *)(&stack0xffffffec + iVar2),
                                          *(CCSize *)(&stack0xfffffff0 + iVar2));
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(iRam000c1334 + 0xc129a));
      }
      iVar26 = **ppiVar5;
      *(int *)(&stack0x00000058 + iVar2) = iVar26;
      puVar20 = *(undefined4 **)(iRam000c132c + 0xc1162);
      uVar23 = __floatsisf(*(int *)(iVar26 + 0x284) / 2);
      uVar23 = __subsf3(*puVar20,uVar23);
      iVar26 = *(int *)(*(int *)(&stack0x00000058 + iVar2) + 0x280);
      *(undefined4 *)(&stack0x00000060 + iVar2) = uVar23;
      uVar23 = __floatsisf(iVar26 / 2);
      uVar60 = __subsf3(puVar20[1],uVar23);
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000e0 + iVar2),(float)uVar60,
                 (float)((ulonglong)uVar60 >> 0x20));
      iVar21 = *(int *)(*(int *)(&stack0x00000054 + iVar2) +
                       *(int *)(*(int *)(&stack0x0000005c + iVar2) + (int)*ppiVar5));
      puVar20 = (undefined4 *)(**(code **)(*piVar6 + 0x38))(piVar6);
      iVar26 = *(int *)(&stack0x0000005c + iVar2);
      iVar15 = *(int *)(&stack0x00000054 + iVar2);
      *(undefined4 *)(iVar21 + 0x20) = *puVar20;
      *(undefined4 *)(iVar21 + 0x24) = puVar20[1];
      *(undefined4 *)(&stack0x00000060 + iVar2) =
           *(undefined4 *)(*(int *)(iVar15 + *(int *)(iVar26 + (int)*ppiVar5)) + 0x40);
      for (iVar26 = 0; iVar26 < *(int *)(&stack0x00000060 + iVar2); iVar26 = iVar26 + 1) {
        if (*(int *)(&stack0x0000024c + iVar2) == 2) {
          piVar16 = *ppiVar5;
          *(int **)(&stack0x0000005c + iVar2) = ppiVar5[1];
          uVar25 = *(undefined4 *)
                    (*(int *)(*(int *)(&stack0x00000054 + iVar2) + piVar16[2]) + iVar26 * 0x1c +
                    0x4c);
          uVar23 = *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 0x40);
          *(undefined4 *)(&stack0x00000058 + iVar2) = uVar25;
          iVar15 = __aeabi_fcmplt(uVar23,uVar25);
          if (iVar15 != 0) {
            *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 0x40) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
          }
        }
      }
      iVar21 = *(int *)(iVar13 * 4 + **ppiVar5);
      uVar23 = *(undefined4 *)(iVar21 + 0x38);
      *(undefined4 *)(&stack0x0000005c + iVar2) = uVar23;
      iVar26 = __aeabi_fcmpeq(uVar23,0);
      iVar15 = *piVar6;
      *(int *)(&stack0x00000054 + iVar2) = iVar15;
      if (iVar26 == 0) {
        if (*(int *)(iVar21 + 0x40) == 0) {
LAB_000c1248:
          uVar3 = 0xff;
          pcVar17 = *(code **)(*(int *)(&stack0x00000054 + iVar2) + 0xec);
        }
        else {
          iVar26 = __aeabi_fcmpeq(*(undefined4 *)(iVar21 + 0x4c),0);
          if (iVar26 == 0) {
            iVar15 = *(int *)(&stack0x00000054 + iVar2);
            goto LAB_000c1232;
          }
          iVar26 = __aeabi_fcmpeq(*(undefined4 *)(&stack0x0000005c + iVar2),uRam000c1330);
          if (iVar26 != 0) goto LAB_000c1248;
          uVar3 = __fixunssfsi(*(undefined4 *)(&stack0x0000005c + iVar2));
          pcVar17 = *(code **)(*(int *)(&stack0x00000054 + iVar2) + 0xec);
        }
      }
      else {
LAB_000c1232:
        pcVar17 = *(code **)(iVar15 + 0xec);
        uVar3 = 0;
      }
      (*pcVar17)(piVar6,uVar3);
      (**(code **)(*piVar6 + 0x2c))(piVar6,*(undefined4 *)(*(int *)(iVar13 * 4 + **ppiVar5) + 0x18))
      ;
      (**(code **)(*piVar6 + 0x34))(piVar6,*(undefined4 *)(*(int *)(iVar13 * 4 + **ppiVar5) + 0x1c))
      ;
      this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
      fVar59 = (float)cocos2d::CCTextureCache::removeAllTextures(this_00);
    }
    iVar13 = iVar13 + 1;
  }
  if (**(int **)(&stack0x00000068 + iVar2) == 2) {
    cocos2d::CCNode::setScale(*(CCNode **)(&stack0x00000064 + iVar2),fVar59);
  }
  (**(code **)(**(int **)(&stack0x00000064 + iVar2) + 0xac))
            (*(int **)(&stack0x00000064 + iVar2),ppiVar5);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x00000064 + iVar2));
  piVar6 = (int *)**ppiVar5;
  *(undefined4 *)(&stack0x0000006c + iVar2) = 2;
  *(undefined4 *)(*piVar6 + 4) = 0x50;
  FUN_000c1efa();
  piVar6 = *(int **)(&stack0x00000064 + iVar2);
  pcVar17 = *(code **)(*piVar6 + 0x58);
  this_01 = (CCArray *)(*pcVar17)(piVar6);
  *(CCArray **)(&stack0x0000005c + iVar2) = this_01;
  if (this_01 == (CCArray *)0x0) {
    this_01 = (CCArray *)FUN_000c1ef8();
  }
  iVar13 = cocos2d::CCArray::count(this_01);
  if (iVar13 != 0) {
    FUN_000c1eea();
  }
  FUN_000c1ef8();
  bVar1 = bRam0000001c;
  coprocessor_load(0xf,in_cr15,in_r12 + 0x3fc);
  pcVar22 = (code *)(uint)bRam0000001c;
  *(short *)(ppiVar5 + 8) = (short)piVar6;
  *(ushort *)(ppiVar5 + 6) = (ushort)bVar1;
  *(undefined2 *)(pcVar17 + 0x18) = extraout_r1;
  ppcVar24 = (code **)(uint)(byte)pcVar17[0x15];
  *ppcVar24 = pcVar17;
  ppcVar24[1] = pcVar17;
  ppcVar24[2] = pcVar22;
  *(short *)(pcVar22 + 10) = (short)ppiVar5;
  pcVar9 = (code *)cocos2d::CCArray::count(*(CCArray **)(&stack0x0000005c + iVar2));
  if (pcVar9 <= pcVar22) {
    FUN_000c1ee8();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x0000005c + iVar2),(uint)pcVar22);
  memset(&stack0x000000e0 + iVar2,0,0x78);
  memset(&stack0x000000c0 + iVar2,0,0xc);
  iVar26 = (*ppiVar5)[(int)pcVar17];
  iVar13 = *(int *)((int)pcVar22 * 4 + iVar26);
  if (iVar13 == 0) {
    FUN_000c1ef8();
  }
  if (*(int *)(iVar13 + 0x40) == 0) {
    *(undefined4 *)((int)(pcVar22 + 0x50) * 4 + iVar26) = 0;
    FUN_000c1ee8();
    pcVar22 = pcVar17;
    pcVar17 = (code *)0x0;
  }
  else {
    *(int *)(&stack0x00000070 + iVar2) = *(int *)(iVar13 + 0x40);
    *(undefined4 *)(&stack0x00000050 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000054 + iVar2) = 0;
    iVar13 = *(int *)(&stack0x00000070 + iVar2);
    if (iVar13 <= *(int *)(&stack0x00000050 + iVar2)) {
      pCVar10 = *(CCFiniteTimeAction **)(&stack0x000000e0 + iVar2);
      if (pCVar10 == (CCFiniteTimeAction *)0x0) {
        pCVar10 = (CCFiniteTimeAction *)FUN_000c1ee8();
      }
      if (iVar13 == 1) {
        *(int *)(&stack0x00000050 + iVar2) = (*ppiVar5)[(int)pcVar17];
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar10,0);
      }
      if (iVar13 == 2) {
        *(int *)(&stack0x00000050 + iVar2) = (*ppiVar5)[(int)pcVar17];
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar10,*(undefined4 *)(&stack0x000000e4 + iVar2),0);
      }
      if (iVar13 != 3) {
        if (iVar13 == 4) {
          piVar6 = *ppiVar5;
          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
          *puVar33 = 0;
        }
        else {
          if (iVar13 != 5) {
            if (iVar13 == 6) {
              piVar6 = *ppiVar5;
              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
              *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
              *puVar35 = *(undefined4 *)(&stack0x000000f0 + iVar2);
              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
              *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(&stack0x000000f4 + iVar2);
              *(undefined4 *)(&stack0xffffffec + iVar2) = 0;
            }
            else {
              if (iVar13 != 7) {
                if (iVar13 == 8) {
                  piVar6 = *ppiVar5;
                  *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                  *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                  *puVar37 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                       *(undefined4 *)(&stack0x000000fc + iVar2);
                  *(undefined4 *)((int)aiStack_c + iVar2) = 0;
                }
                else {
                  if (iVar13 != 9) {
                    if (iVar13 == 10) {
                      piVar6 = *ppiVar5;
                      *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                      uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                      *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                      *puVar39 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                      uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                      uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                           *(undefined4 *)(&stack0x000000f4 + iVar2);
                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                           *(undefined4 *)(&stack0x000000f8 + iVar2);
                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                           *(undefined4 *)(&stack0x000000fc + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2) =
                           *(undefined4 *)(&stack0x00000100 + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                           *(undefined4 *)(&stack0x00000104 + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) = 0;
                    }
                    else {
                      if (iVar13 != 0xb) {
                        if (iVar13 == 0xc) {
                          piVar6 = *ppiVar5;
                          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                          *puVar41 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                          *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                               *(undefined4 *)(&stack0x000000f4 + iVar2);
                          *(undefined4 *)(&stack0xffffffec + iVar2) =
                               *(undefined4 *)(&stack0x000000f8 + iVar2);
                          *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                               *(undefined4 *)(&stack0x000000fc + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2) =
                               *(undefined4 *)(&stack0x00000100 + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                               *(undefined4 *)(&stack0x00000104 + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                               *(undefined4 *)(&stack0x00000108 + iVar2);
                          *(undefined4 *)((int)&param_5 + iVar2) =
                               *(undefined4 *)(&stack0x0000010c + iVar2);
                          *(undefined4 *)((int)&param_6 + iVar2) = 0;
                        }
                        else {
                          if (iVar13 != 0xd) {
                            if (iVar13 == 0xe) {
                              piVar6 = *ppiVar5;
                              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                              *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                              *puVar43 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                              *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                   *(undefined4 *)(&stack0x000000f4 + iVar2);
                              *(undefined4 *)(&stack0xffffffec + iVar2) =
                                   *(undefined4 *)(&stack0x000000f8 + iVar2);
                              *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                   *(undefined4 *)(&stack0x000000fc + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2) =
                                   *(undefined4 *)(&stack0x00000100 + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                   *(undefined4 *)(&stack0x00000104 + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                   *(undefined4 *)(&stack0x00000108 + iVar2);
                              *(undefined4 *)((int)&param_5 + iVar2) =
                                   *(undefined4 *)(&stack0x0000010c + iVar2);
                              *(undefined4 *)((int)&param_6 + iVar2) =
                                   *(undefined4 *)(&stack0x00000110 + iVar2);
                              *(undefined4 *)(&stack0x00000008 + iVar2) =
                                   *(undefined4 *)(&stack0x00000114 + iVar2);
                              *(undefined4 *)(&stack0x0000000c + iVar2) = 0;
                            }
                            else {
                              if (iVar13 != 0xf) {
                                if (iVar13 == 0x10) {
                                  piVar6 = *ppiVar5;
                                  *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                  *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                  *puVar45 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                       *(undefined4 *)(&stack0x000000fc + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2) =
                                       *(undefined4 *)(&stack0x00000100 + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                       *(undefined4 *)(&stack0x00000104 + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                       *(undefined4 *)(&stack0x00000108 + iVar2);
                                  *(undefined4 *)((int)&param_5 + iVar2) =
                                       *(undefined4 *)(&stack0x0000010c + iVar2);
                                  *(undefined4 *)((int)&param_6 + iVar2) =
                                       *(undefined4 *)(&stack0x00000110 + iVar2);
                                  *(undefined4 *)(&stack0x00000008 + iVar2) =
                                       *(undefined4 *)(&stack0x00000114 + iVar2);
                                  *(undefined4 *)(&stack0x0000000c + iVar2) =
                                       *(undefined4 *)(&stack0x00000118 + iVar2);
                                  *(undefined4 *)(&stack0x00000010 + iVar2) =
                                       *(undefined4 *)(&stack0x0000011c + iVar2);
                                  *(undefined4 *)(&stack0x00000014 + iVar2) = 0;
                                }
                                else {
                                  if (iVar13 != 0x11) {
                                    if (iVar13 == 0x12) {
                                      piVar6 = *ppiVar5;
                                      *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                      uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                      *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                      *puVar47 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                      uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                      uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                           *(undefined4 *)(&stack0x000000f4 + iVar2);
                                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                                           *(undefined4 *)(&stack0x000000f8 + iVar2);
                                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                           *(undefined4 *)(&stack0x000000fc + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2) =
                                           *(undefined4 *)(&stack0x00000100 + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                           *(undefined4 *)(&stack0x00000104 + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                           *(undefined4 *)(&stack0x00000108 + iVar2);
                                      *(undefined4 *)((int)&param_5 + iVar2) =
                                           *(undefined4 *)(&stack0x0000010c + iVar2);
                                      *(undefined4 *)((int)&param_6 + iVar2) =
                                           *(undefined4 *)(&stack0x00000110 + iVar2);
                                      *(undefined4 *)(&stack0x00000008 + iVar2) =
                                           *(undefined4 *)(&stack0x00000114 + iVar2);
                                      *(undefined4 *)(&stack0x0000000c + iVar2) =
                                           *(undefined4 *)(&stack0x00000118 + iVar2);
                                      *(undefined4 *)(&stack0x00000010 + iVar2) =
                                           *(undefined4 *)(&stack0x0000011c + iVar2);
                                      *(undefined4 *)(&stack0x00000014 + iVar2) =
                                           *(undefined4 *)(&stack0x00000120 + iVar2);
                                      *(undefined4 *)(&stack0x00000018 + iVar2) =
                                           *(undefined4 *)(&stack0x00000124 + iVar2);
                                      *(undefined4 *)(&stack0x0000001c + iVar2) = 0;
                                    }
                                    else {
                                      if (iVar13 != 0x13) {
                                        if (iVar13 == 0x14) {
                                          piVar6 = *ppiVar5;
                                          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                          *puVar49 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                          *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                               *(undefined4 *)(&stack0x000000f4 + iVar2);
                                          *(undefined4 *)(&stack0xffffffec + iVar2) =
                                               *(undefined4 *)(&stack0x000000f8 + iVar2);
                                          *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                               *(undefined4 *)(&stack0x000000fc + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2) =
                                               *(undefined4 *)(&stack0x00000100 + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                               *(undefined4 *)(&stack0x00000104 + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                               *(undefined4 *)(&stack0x00000108 + iVar2);
                                          *(undefined4 *)((int)&param_5 + iVar2) =
                                               *(undefined4 *)(&stack0x0000010c + iVar2);
                                          *(undefined4 *)((int)&param_6 + iVar2) =
                                               *(undefined4 *)(&stack0x00000110 + iVar2);
                                          *(undefined4 *)(&stack0x00000008 + iVar2) =
                                               *(undefined4 *)(&stack0x00000114 + iVar2);
                                          *(undefined4 *)(&stack0x0000000c + iVar2) =
                                               *(undefined4 *)(&stack0x00000118 + iVar2);
                                          *(undefined4 *)(&stack0x00000010 + iVar2) =
                                               *(undefined4 *)(&stack0x0000011c + iVar2);
                                          *(undefined4 *)(&stack0x00000014 + iVar2) =
                                               *(undefined4 *)(&stack0x00000120 + iVar2);
                                          *(undefined4 *)(&stack0x00000018 + iVar2) =
                                               *(undefined4 *)(&stack0x00000124 + iVar2);
                                          *(undefined4 *)(&stack0x0000001c + iVar2) =
                                               *(undefined4 *)(&stack0x00000128 + iVar2);
                                          *(undefined4 *)(&stack0x00000020 + iVar2) =
                                               *(undefined4 *)(&stack0x0000012c + iVar2);
                                          *(undefined4 *)(&stack0x00000024 + iVar2) = 0;
                                        }
                                        else {
                                          if (iVar13 != 0x15) {
                                            if (iVar13 == 0x16) {
                                              piVar6 = *ppiVar5;
                                              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                              *(int *)(&stack0x00000050 + iVar2) =
                                                   piVar6[(int)pcVar17];
                                              *puVar51 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                              *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                   *(undefined4 *)(&stack0x000000f4 + iVar2);
                                              *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                   *(undefined4 *)(&stack0x000000f8 + iVar2);
                                              *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                   *(undefined4 *)(&stack0x000000fc + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000100 + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                   *(undefined4 *)(&stack0x00000104 + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                   *(undefined4 *)(&stack0x00000108 + iVar2);
                                              *(undefined4 *)((int)&param_5 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000010c + iVar2);
                                              *(undefined4 *)((int)&param_6 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000110 + iVar2);
                                              *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000114 + iVar2);
                                              *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000118 + iVar2);
                                              *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000011c + iVar2);
                                              *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000120 + iVar2);
                                              *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000124 + iVar2);
                                              *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000128 + iVar2);
                                              *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000012c + iVar2);
                                              *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000130 + iVar2);
                                              *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000134 + iVar2);
                                              *(undefined4 *)(&stack0x0000002c + iVar2) = 0;
                                            }
                                            else {
                                              if (iVar13 != 0x17) {
                                                if (iVar13 == 0x18) {
                                                  piVar6 = *ppiVar5;
                                                  *(int *)(&stack0x00000054 + iVar2) =
                                                       (int)pcVar17 * 4;
                                                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2)
                                                  ;
                                                  *(int *)(&stack0x00000050 + iVar2) =
                                                       piVar6[(int)pcVar17];
                                                  *puVar53 = *(undefined4 *)
                                                              (&stack0x000000f0 + iVar2);
                                                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2)
                                                  ;
                                                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2)
                                                  ;
                                                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                                                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                                                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                       *(undefined4 *)(&stack0x000000fc + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000100 + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                       *(undefined4 *)(&stack0x00000104 + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                       *(undefined4 *)(&stack0x00000108 + iVar2);
                                                  *(undefined4 *)((int)&param_5 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000010c + iVar2);
                                                  *(undefined4 *)((int)&param_6 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000110 + iVar2);
                                                  *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000114 + iVar2);
                                                  *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000118 + iVar2);
                                                  *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000011c + iVar2);
                                                  *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000120 + iVar2);
                                                  *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000124 + iVar2);
                                                  *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000128 + iVar2);
                                                  *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000012c + iVar2);
                                                  *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000130 + iVar2);
                                                  *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000134 + iVar2);
                                                  *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000138 + iVar2);
                                                  *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000013c + iVar2);
                                                  *(undefined4 *)(&stack0x00000034 + iVar2) = 0;
                                                }
                                                else {
                                                  if (iVar13 != 0x19) {
                                                    if (iVar13 == 0x1a) {
                                                      piVar6 = *ppiVar5;
                                                      *(int *)(&stack0x00000054 + iVar2) =
                                                           (int)pcVar17 * 4;
                                                      uVar23 = *(undefined4 *)
                                                                (&stack0x000000e4 + iVar2);
                                                      *(int *)(&stack0x00000050 + iVar2) =
                                                           piVar6[(int)pcVar17];
                                                      *puVar55 = *(undefined4 *)
                                                                  (&stack0x000000f0 + iVar2);
                                                      uVar25 = *(undefined4 *)
                                                                (&stack0x000000e8 + iVar2);
                                                      uVar18 = *(undefined4 *)
                                                                (&stack0x000000ec + iVar2);
                                                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                           *(undefined4 *)(&stack0x000000f4 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                           *(undefined4 *)(&stack0x000000f8 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                           *(undefined4 *)(&stack0x000000fc + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000100 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                           *(undefined4 *)(&stack0x00000104 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                           *(undefined4 *)(&stack0x00000108 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)&param_5 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000010c + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)&param_6 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000110 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000114 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000118 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000011c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000120 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000124 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000128 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000012c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000130 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000134 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000138 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000013c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000140 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000144 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000003c + iVar2) = 0;
                                                    }
                                                    else {
                                                      if (iVar13 != 0x1b) {
                                                        if (iVar13 == 0x1c) {
                                                          piVar6 = *ppiVar5;
                                                          *(int *)(&stack0x00000054 + iVar2) =
                                                               (int)pcVar17 * 4;
                                                          uVar23 = *(undefined4 *)
                                                                    (&stack0x000000e4 + iVar2);
                                                          *(int *)(&stack0x00000050 + iVar2) =
                                                               piVar6[(int)pcVar17];
                                                          *puVar57 = *(undefined4 *)
                                                                      (&stack0x000000f0 + iVar2);
                                                          uVar25 = *(undefined4 *)
                                                                    (&stack0x000000e8 + iVar2);
                                                          uVar18 = *(undefined4 *)
                                                                    (&stack0x000000ec + iVar2);
                                                          *(undefined4 *)(&stack0xffffffe8 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000f4 + iVar2);
                                                          *(undefined4 *)(&stack0xffffffec + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000f8 + iVar2);
                                                          *(undefined4 *)(&stack0xfffffff0 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000fc + iVar2);
                                                          *(undefined4 *)((int)aiStack_c + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x00000100 + iVar2);
                                                          *(undefined4 *)
                                                           ((int)aiStack_c + iVar2 + 4) =
                                                               *(undefined4 *)
                                                                (&stack0x00000104 + iVar2);
                                                          *(undefined4 *)
                                                           ((int)aiStack_c + iVar2 + 8) =
                                                               *(undefined4 *)
                                                                (&stack0x00000108 + iVar2);
                                                          *(undefined4 *)((int)&param_5 + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x0000010c + iVar2);
                                                          *(undefined4 *)((int)&param_6 + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x00000110 + iVar2);
                                                          *(undefined4 *)(&stack0x00000008 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000114 + iVar2);
                                                          *(undefined4 *)(&stack0x0000000c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000118 + iVar2);
                                                          *(undefined4 *)(&stack0x00000010 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000011c + iVar2);
                                                          *(undefined4 *)(&stack0x00000014 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000120 + iVar2);
                                                          *(undefined4 *)(&stack0x00000018 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000124 + iVar2);
                                                          *(undefined4 *)(&stack0x0000001c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000128 + iVar2);
                                                          *(undefined4 *)(&stack0x00000020 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000012c + iVar2);
                                                          *(undefined4 *)(&stack0x00000024 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000130 + iVar2);
                                                          *(undefined4 *)(&stack0x00000028 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000134 + iVar2);
                                                          *(undefined4 *)(&stack0x0000002c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000138 + iVar2);
                                                          *(undefined4 *)(&stack0x00000030 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000013c + iVar2);
                                                          *(undefined4 *)(&stack0x00000034 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000140 + iVar2);
                                                          *(undefined4 *)(&stack0x00000038 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000144 + iVar2);
                                                          *(undefined4 *)(&stack0x0000003c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000148 + iVar2);
                                                          *(undefined4 *)(&stack0x00000040 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000014c + iVar2);
                                                          *(undefined4 *)(&stack0x00000044 + iVar2)
                                                               = 0;
                                                        }
                                                        else {
                                                          if (iVar13 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                            cocos2d::CCLog((char *)(DAT_000c1f30 +
                                                                                   0xc1ee6));
                                                          }
                                                          piVar6 = *ppiVar5;
                                                          *(int *)(&stack0x00000054 + iVar2) =
                                                               (int)pcVar17 * 4;
                                                          uVar23 = *(undefined4 *)
                                                                    (&stack0x000000e4 + iVar2);
                                                          *(int *)(&stack0x00000050 + iVar2) =
                                                               piVar6[(int)pcVar17];
                                                          *puVar58 = *(undefined4 *)
                                                                      (&stack0x000000f0 + iVar2);
                                                          uVar25 = *(undefined4 *)
                                                                    (&stack0x000000e8 + iVar2);
                                                          uVar18 = *(undefined4 *)
                                                                    (&stack0x000000ec + iVar2);
                                                          *(undefined4 *)(&stack0xffffffe8 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000f4 + iVar2);
                                                          *(undefined4 *)(&stack0xffffffec + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000f8 + iVar2);
                                                          *(undefined4 *)(&stack0xfffffff0 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x000000fc + iVar2);
                                                          *(undefined4 *)((int)aiStack_c + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x00000100 + iVar2);
                                                          *(undefined4 *)
                                                           ((int)aiStack_c + iVar2 + 4) =
                                                               *(undefined4 *)
                                                                (&stack0x00000104 + iVar2);
                                                          *(undefined4 *)
                                                           ((int)aiStack_c + iVar2 + 8) =
                                                               *(undefined4 *)
                                                                (&stack0x00000108 + iVar2);
                                                          *(undefined4 *)((int)&param_5 + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x0000010c + iVar2);
                                                          *(undefined4 *)((int)&param_6 + iVar2) =
                                                               *(undefined4 *)
                                                                (&stack0x00000110 + iVar2);
                                                          *(undefined4 *)(&stack0x00000008 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000114 + iVar2);
                                                          *(undefined4 *)(&stack0x0000000c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000118 + iVar2);
                                                          *(undefined4 *)(&stack0x00000010 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000011c + iVar2);
                                                          *(undefined4 *)(&stack0x00000014 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000120 + iVar2);
                                                          *(undefined4 *)(&stack0x00000018 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000124 + iVar2);
                                                          *(undefined4 *)(&stack0x0000001c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000128 + iVar2);
                                                          *(undefined4 *)(&stack0x00000020 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000012c + iVar2);
                                                          *(undefined4 *)(&stack0x00000024 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000130 + iVar2);
                                                          *(undefined4 *)(&stack0x00000028 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000134 + iVar2);
                                                          *(undefined4 *)(&stack0x0000002c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000138 + iVar2);
                                                          *(undefined4 *)(&stack0x00000030 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000013c + iVar2);
                                                          *(undefined4 *)(&stack0x00000034 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000140 + iVar2);
                                                          *(undefined4 *)(&stack0x00000038 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000144 + iVar2);
                                                          *(undefined4 *)(&stack0x0000003c + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000148 + iVar2);
                                                          *(undefined4 *)(&stack0x00000040 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x0000014c + iVar2);
                                                          *(undefined4 *)(&stack0x00000044 + iVar2)
                                                               = *(undefined4 *)
                                                                  (&stack0x00000150 + iVar2);
                                                          *(undefined4 *)(&stack0x00000048 + iVar2)
                                                               = 0;
                                                        }
                    /* WARNING: Subroutine does not return */
                                                        cocos2d::CCSequence::actions
                                                                  (pCVar10,uVar23,uVar25,uVar18);
                                                      }
                                                      piVar6 = *ppiVar5;
                                                      *(int *)(&stack0x00000054 + iVar2) =
                                                           (int)pcVar17 * 4;
                                                      uVar23 = *(undefined4 *)
                                                                (&stack0x000000e4 + iVar2);
                                                      *(int *)(&stack0x00000050 + iVar2) =
                                                           piVar6[(int)pcVar17];
                                                      *puVar56 = *(undefined4 *)
                                                                  (&stack0x000000f0 + iVar2);
                                                      uVar25 = *(undefined4 *)
                                                                (&stack0x000000e8 + iVar2);
                                                      uVar18 = *(undefined4 *)
                                                                (&stack0x000000ec + iVar2);
                                                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                           *(undefined4 *)(&stack0x000000f4 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                           *(undefined4 *)(&stack0x000000f8 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                           *(undefined4 *)(&stack0x000000fc + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000100 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                           *(undefined4 *)(&stack0x00000104 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                           *(undefined4 *)(&stack0x00000108 + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)&param_5 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000010c + iVar2)
                                                      ;
                                                      *(undefined4 *)((int)&param_6 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000110 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000114 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000118 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000011c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000120 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000124 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000128 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000012c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000130 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000134 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000138 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                           *(undefined4 *)(&stack0x0000013c + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000140 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                           *(undefined4 *)(&stack0x00000144 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x0000003c + iVar2) =
                                                           *(undefined4 *)(&stack0x00000148 + iVar2)
                                                      ;
                                                      *(undefined4 *)(&stack0x00000040 + iVar2) = 0;
                                                    }
                    /* WARNING: Subroutine does not return */
                                                    cocos2d::CCSequence::actions
                                                              (pCVar10,uVar23,uVar25,uVar18);
                                                  }
                                                  piVar6 = *ppiVar5;
                                                  *(int *)(&stack0x00000054 + iVar2) =
                                                       (int)pcVar17 * 4;
                                                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2)
                                                  ;
                                                  *(int *)(&stack0x00000050 + iVar2) =
                                                       piVar6[(int)pcVar17];
                                                  *puVar54 = *(undefined4 *)
                                                              (&stack0x000000f0 + iVar2);
                                                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2)
                                                  ;
                                                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2)
                                                  ;
                                                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                                                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                                                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                       *(undefined4 *)(&stack0x000000fc + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000100 + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                       *(undefined4 *)(&stack0x00000104 + iVar2);
                                                  *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                       *(undefined4 *)(&stack0x00000108 + iVar2);
                                                  *(undefined4 *)((int)&param_5 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000010c + iVar2);
                                                  *(undefined4 *)((int)&param_6 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000110 + iVar2);
                                                  *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000114 + iVar2);
                                                  *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000118 + iVar2);
                                                  *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000011c + iVar2);
                                                  *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000120 + iVar2);
                                                  *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000124 + iVar2);
                                                  *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000128 + iVar2);
                                                  *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000012c + iVar2);
                                                  *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000130 + iVar2);
                                                  *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000134 + iVar2);
                                                  *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                       *(undefined4 *)(&stack0x00000138 + iVar2);
                                                  *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                       *(undefined4 *)(&stack0x0000013c + iVar2);
                                                  *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                       *(undefined4 *)(&stack0x00000140 + iVar2);
                                                  *(undefined4 *)(&stack0x00000038 + iVar2) = 0;
                                                }
                    /* WARNING: Subroutine does not return */
                                                cocos2d::CCSequence::actions
                                                          (pCVar10,uVar23,uVar25,uVar18);
                                              }
                                              piVar6 = *ppiVar5;
                                              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                              *(int *)(&stack0x00000050 + iVar2) =
                                                   piVar6[(int)pcVar17];
                                              *puVar52 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                              *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                   *(undefined4 *)(&stack0x000000f4 + iVar2);
                                              *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                   *(undefined4 *)(&stack0x000000f8 + iVar2);
                                              *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                   *(undefined4 *)(&stack0x000000fc + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000100 + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                                   *(undefined4 *)(&stack0x00000104 + iVar2);
                                              *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                                   *(undefined4 *)(&stack0x00000108 + iVar2);
                                              *(undefined4 *)((int)&param_5 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000010c + iVar2);
                                              *(undefined4 *)((int)&param_6 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000110 + iVar2);
                                              *(undefined4 *)(&stack0x00000008 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000114 + iVar2);
                                              *(undefined4 *)(&stack0x0000000c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000118 + iVar2);
                                              *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000011c + iVar2);
                                              *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000120 + iVar2);
                                              *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000124 + iVar2);
                                              *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000128 + iVar2);
                                              *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                   *(undefined4 *)(&stack0x0000012c + iVar2);
                                              *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000130 + iVar2);
                                              *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                   *(undefined4 *)(&stack0x00000134 + iVar2);
                                              *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                   *(undefined4 *)(&stack0x00000138 + iVar2);
                                              *(undefined4 *)(&stack0x00000030 + iVar2) = 0;
                                            }
                    /* WARNING: Subroutine does not return */
                                            cocos2d::CCSequence::actions
                                                      (pCVar10,uVar23,uVar25,uVar18);
                                          }
                                          piVar6 = *ppiVar5;
                                          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                          *puVar50 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                          *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                               *(undefined4 *)(&stack0x000000f4 + iVar2);
                                          *(undefined4 *)(&stack0xffffffec + iVar2) =
                                               *(undefined4 *)(&stack0x000000f8 + iVar2);
                                          *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                               *(undefined4 *)(&stack0x000000fc + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2) =
                                               *(undefined4 *)(&stack0x00000100 + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                               *(undefined4 *)(&stack0x00000104 + iVar2);
                                          *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                               *(undefined4 *)(&stack0x00000108 + iVar2);
                                          *(undefined4 *)((int)&param_5 + iVar2) =
                                               *(undefined4 *)(&stack0x0000010c + iVar2);
                                          *(undefined4 *)((int)&param_6 + iVar2) =
                                               *(undefined4 *)(&stack0x00000110 + iVar2);
                                          *(undefined4 *)(&stack0x00000008 + iVar2) =
                                               *(undefined4 *)(&stack0x00000114 + iVar2);
                                          *(undefined4 *)(&stack0x0000000c + iVar2) =
                                               *(undefined4 *)(&stack0x00000118 + iVar2);
                                          *(undefined4 *)(&stack0x00000010 + iVar2) =
                                               *(undefined4 *)(&stack0x0000011c + iVar2);
                                          *(undefined4 *)(&stack0x00000014 + iVar2) =
                                               *(undefined4 *)(&stack0x00000120 + iVar2);
                                          *(undefined4 *)(&stack0x00000018 + iVar2) =
                                               *(undefined4 *)(&stack0x00000124 + iVar2);
                                          *(undefined4 *)(&stack0x0000001c + iVar2) =
                                               *(undefined4 *)(&stack0x00000128 + iVar2);
                                          *(undefined4 *)(&stack0x00000020 + iVar2) =
                                               *(undefined4 *)(&stack0x0000012c + iVar2);
                                          *(undefined4 *)(&stack0x00000024 + iVar2) =
                                               *(undefined4 *)(&stack0x00000130 + iVar2);
                                          *(undefined4 *)(&stack0x00000028 + iVar2) = 0;
                                        }
                    /* WARNING: Subroutine does not return */
                                        cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                                      }
                                      piVar6 = *ppiVar5;
                                      *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                      uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                      *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                      *puVar48 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                      uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                      uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                           *(undefined4 *)(&stack0x000000f4 + iVar2);
                                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                                           *(undefined4 *)(&stack0x000000f8 + iVar2);
                                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                           *(undefined4 *)(&stack0x000000fc + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2) =
                                           *(undefined4 *)(&stack0x00000100 + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                           *(undefined4 *)(&stack0x00000104 + iVar2);
                                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                           *(undefined4 *)(&stack0x00000108 + iVar2);
                                      *(undefined4 *)((int)&param_5 + iVar2) =
                                           *(undefined4 *)(&stack0x0000010c + iVar2);
                                      *(undefined4 *)((int)&param_6 + iVar2) =
                                           *(undefined4 *)(&stack0x00000110 + iVar2);
                                      *(undefined4 *)(&stack0x00000008 + iVar2) =
                                           *(undefined4 *)(&stack0x00000114 + iVar2);
                                      *(undefined4 *)(&stack0x0000000c + iVar2) =
                                           *(undefined4 *)(&stack0x00000118 + iVar2);
                                      *(undefined4 *)(&stack0x00000010 + iVar2) =
                                           *(undefined4 *)(&stack0x0000011c + iVar2);
                                      *(undefined4 *)(&stack0x00000014 + iVar2) =
                                           *(undefined4 *)(&stack0x00000120 + iVar2);
                                      *(undefined4 *)(&stack0x00000018 + iVar2) =
                                           *(undefined4 *)(&stack0x00000124 + iVar2);
                                      *(undefined4 *)(&stack0x0000001c + iVar2) =
                                           *(undefined4 *)(&stack0x00000128 + iVar2);
                                      *(undefined4 *)(&stack0x00000020 + iVar2) = 0;
                                    }
                    /* WARNING: Subroutine does not return */
                                    cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                                  }
                                  piVar6 = *ppiVar5;
                                  *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                                  *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                                  *puVar46 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                       *(undefined4 *)(&stack0x000000fc + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2) =
                                       *(undefined4 *)(&stack0x00000100 + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                       *(undefined4 *)(&stack0x00000104 + iVar2);
                                  *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                       *(undefined4 *)(&stack0x00000108 + iVar2);
                                  *(undefined4 *)((int)&param_5 + iVar2) =
                                       *(undefined4 *)(&stack0x0000010c + iVar2);
                                  *(undefined4 *)((int)&param_6 + iVar2) =
                                       *(undefined4 *)(&stack0x00000110 + iVar2);
                                  *(undefined4 *)(&stack0x00000008 + iVar2) =
                                       *(undefined4 *)(&stack0x00000114 + iVar2);
                                  *(undefined4 *)(&stack0x0000000c + iVar2) =
                                       *(undefined4 *)(&stack0x00000118 + iVar2);
                                  *(undefined4 *)(&stack0x00000010 + iVar2) =
                                       *(undefined4 *)(&stack0x0000011c + iVar2);
                                  *(undefined4 *)(&stack0x00000014 + iVar2) =
                                       *(undefined4 *)(&stack0x00000120 + iVar2);
                                  *(undefined4 *)(&stack0x00000018 + iVar2) = 0;
                                }
                    /* WARNING: Subroutine does not return */
                                cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                              }
                              piVar6 = *ppiVar5;
                              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                              *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                              *puVar44 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                              *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                   *(undefined4 *)(&stack0x000000f4 + iVar2);
                              *(undefined4 *)(&stack0xffffffec + iVar2) =
                                   *(undefined4 *)(&stack0x000000f8 + iVar2);
                              *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                   *(undefined4 *)(&stack0x000000fc + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2) =
                                   *(undefined4 *)(&stack0x00000100 + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                                   *(undefined4 *)(&stack0x00000104 + iVar2);
                              *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                                   *(undefined4 *)(&stack0x00000108 + iVar2);
                              *(undefined4 *)((int)&param_5 + iVar2) =
                                   *(undefined4 *)(&stack0x0000010c + iVar2);
                              *(undefined4 *)((int)&param_6 + iVar2) =
                                   *(undefined4 *)(&stack0x00000110 + iVar2);
                              *(undefined4 *)(&stack0x00000008 + iVar2) =
                                   *(undefined4 *)(&stack0x00000114 + iVar2);
                              *(undefined4 *)(&stack0x0000000c + iVar2) =
                                   *(undefined4 *)(&stack0x00000118 + iVar2);
                              *(undefined4 *)(&stack0x00000010 + iVar2) = 0;
                            }
                    /* WARNING: Subroutine does not return */
                            cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                          }
                          piVar6 = *ppiVar5;
                          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                          *puVar42 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                          *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                               *(undefined4 *)(&stack0x000000f4 + iVar2);
                          *(undefined4 *)(&stack0xffffffec + iVar2) =
                               *(undefined4 *)(&stack0x000000f8 + iVar2);
                          *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                               *(undefined4 *)(&stack0x000000fc + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2) =
                               *(undefined4 *)(&stack0x00000100 + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                               *(undefined4 *)(&stack0x00000104 + iVar2);
                          *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                               *(undefined4 *)(&stack0x00000108 + iVar2);
                          *(undefined4 *)((int)&param_5 + iVar2) =
                               *(undefined4 *)(&stack0x0000010c + iVar2);
                          *(undefined4 *)((int)&param_6 + iVar2) =
                               *(undefined4 *)(&stack0x00000110 + iVar2);
                          *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
                        }
                    /* WARNING: Subroutine does not return */
                        cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                      }
                      piVar6 = *ppiVar5;
                      *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                      uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                      *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                      *puVar40 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                      uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                      uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                      *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                           *(undefined4 *)(&stack0x000000f4 + iVar2);
                      *(undefined4 *)(&stack0xffffffec + iVar2) =
                           *(undefined4 *)(&stack0x000000f8 + iVar2);
                      *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                           *(undefined4 *)(&stack0x000000fc + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2) =
                           *(undefined4 *)(&stack0x00000100 + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2 + 4) =
                           *(undefined4 *)(&stack0x00000104 + iVar2);
                      *(undefined4 *)((int)aiStack_c + iVar2 + 8) =
                           *(undefined4 *)(&stack0x00000108 + iVar2);
                      *(undefined4 *)((int)&param_5 + iVar2) = 0;
                    }
                    /* WARNING: Subroutine does not return */
                    cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
                  }
                  piVar6 = *ppiVar5;
                  *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
                  uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
                  *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
                  *puVar38 = *(undefined4 *)(&stack0x000000f0 + iVar2);
                  uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
                  uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
                  *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                       *(undefined4 *)(&stack0x000000f4 + iVar2);
                  *(undefined4 *)(&stack0xffffffec + iVar2) =
                       *(undefined4 *)(&stack0x000000f8 + iVar2);
                  *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                       *(undefined4 *)(&stack0x000000fc + iVar2);
                  *(undefined4 *)((int)aiStack_c + iVar2) =
                       *(undefined4 *)(&stack0x00000100 + iVar2);
                  *(undefined4 *)((int)aiStack_c + iVar2 + 4) = 0;
                }
                    /* WARNING: Subroutine does not return */
                cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
              }
              piVar6 = *ppiVar5;
              *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
              uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
              *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
              *puVar36 = *(undefined4 *)(&stack0x000000f0 + iVar2);
              uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
              uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
              *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(&stack0x000000f4 + iVar2);
              *(undefined4 *)(&stack0xffffffec + iVar2) = *(undefined4 *)(&stack0x000000f8 + iVar2);
              *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
            }
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
          }
          piVar6 = *ppiVar5;
          *(int *)(&stack0x00000054 + iVar2) = (int)pcVar17 * 4;
          uVar23 = *(undefined4 *)(&stack0x000000e4 + iVar2);
          *(int *)(&stack0x00000050 + iVar2) = piVar6[(int)pcVar17];
          uVar25 = *(undefined4 *)(&stack0x000000e8 + iVar2);
          uVar18 = *(undefined4 *)(&stack0x000000ec + iVar2);
          *puVar34 = *(undefined4 *)(&stack0x000000f0 + iVar2);
          *(undefined4 *)(&stack0xffffffe8 + iVar2) = 0;
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar10,uVar23,uVar25,uVar18);
      }
      *(int *)(&stack0x00000050 + iVar2) = (*ppiVar5)[(int)pcVar17];
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions
                (pCVar10,*(undefined4 *)(&stack0x000000e4 + iVar2),
                 *(undefined4 *)(&stack0x000000e8 + iVar2),0);
    }
  }
  piVar6 = *ppiVar5;
  *(int **)(&stack0x00000058 + iVar2) = piVar6;
  if (*(int *)(&stack0x00000050 + iVar2) != 0) {
LAB_000c1508:
    iVar26 = *(int *)((int)pcVar22 * 4 +
                     *(int *)(*(int *)(&stack0x00000058 + iVar2) + (int)pcVar17 * 4));
    uVar23 = *(undefined4 *)(iVar26 + *(int *)(&stack0x00000050 + iVar2) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000058 + iVar2) = uVar23;
    iVar13 = __aeabi_fcmpeq(uVar23,0);
    if (iVar13 == 0) {
      uVar23 = __subsf3(*(undefined4 *)(&stack0x00000058 + iVar2),
                        *(undefined4 *)(&stack0x000000c4 + iVar2));
      pCVar19 = *(CCPoint **)(&stack0x00000058 + iVar2);
      *(undefined4 *)(&stack0x000000c0 + iVar2) = uVar23;
    }
    else {
      *(CCPoint **)(&stack0x000000c0 + iVar2) = DAT_000c1758;
      pCVar19 = DAT_000c1758;
    }
    *(CCPoint **)(&stack0x000000c4 + iVar2) = pCVar19;
    if (*(int *)(&stack0x00000054 + iVar2) == 0) {
      *(undefined4 *)(&stack0x00000068 + iVar2) = *(undefined4 *)(&stack0x000000c0 + iVar2);
      iVar13 = iVar26 + *(int *)(&stack0x00000050 + iVar2) * 0x1c;
      *(int *)(&stack0x00000058 + iVar2) = *(int *)(&stack0x00000050 + iVar2) * 0x1c;
      uVar23 = *(undefined4 *)(iVar13 + 0x50);
      *(int *)(&stack0x00000060 + iVar2) = iVar13;
      uVar23 = __mulsf3(uVar23,0x3f000000);
      uVar23 = __addsf3(uVar23,*(undefined4 *)(iVar26 + 0x20));
      *(undefined4 *)(&stack0x00000074 + iVar2) = uVar23;
      uVar23 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0x54),0x3f000000);
      uVar60 = __subsf3(*(undefined4 *)(iVar26 + 0x24),uVar23);
      uVar60 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000b8 + iVar2),(float)uVar60,
                          (float)((ulonglong)uVar60 >> 0x20));
      iVar13 = (*ppiVar5)[(int)pcVar17];
      iVar26 = *(int *)((int)pcVar22 * 4 + iVar13) + *(int *)(&stack0x00000058 + iVar2);
      *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(iVar26 + 0x60);
      uVar23 = *(undefined4 *)(iVar26 + 100);
      *(int *)((int)aiStack_c + iVar2) = iVar13;
      CVar11 = *(CCPoint *)(&stack0x00000068 + iVar2);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar23;
      CVar12 = *(CCSize *)(&stack0x000000b8 + iVar2);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000054 + iVar2);
      *puVar32 = *(undefined4 *)(iVar26 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar60,CVar11,CVar12,(float)((ulonglong)uVar60 >> 0x20),extraout_s2_02,
                SUB41(*(undefined4 *)(&stack0x000000bc + iVar2),0),*(_KG_Anit **)(iVar26 + 0x58));
    }
    *(undefined4 *)(&stack0x00000060 + iVar2) = *(undefined4 *)(&stack0x000000c0 + iVar2);
    iVar13 = iVar26 + *(int *)(&stack0x00000050 + iVar2) * 0x1c;
    *(int *)(&stack0x00000054 + iVar2) = *(int *)(&stack0x00000050 + iVar2) * 0x1c;
    uVar23 = *(undefined4 *)(iVar13 + 0x50);
    *(int *)(&stack0x00000058 + iVar2) = iVar13;
    uVar23 = __mulsf3(uVar23,0x3f000000);
    uVar23 = __addsf3(uVar23,*(undefined4 *)(iVar26 + 0x20));
    *(undefined4 *)(&stack0x00000068 + iVar2) = uVar23;
    uVar23 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 0x54),0x3f000000);
    uVar60 = __subsf3(*(undefined4 *)(iVar26 + 0x24),uVar23);
    uVar60 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000b0 + iVar2),(float)uVar60,
                        (float)((ulonglong)uVar60 >> 0x20));
    iVar13 = (*ppiVar5)[(int)pcVar17];
    iVar26 = *(int *)((int)pcVar22 * 4 + iVar13) + *(int *)(&stack0x00000054 + iVar2);
    *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(iVar26 + 0x60);
    uVar23 = *(undefined4 *)(iVar26 + 100);
    *(int *)((int)aiStack_c + iVar2) = iVar13;
    CVar11 = *(CCPoint *)(&stack0x00000060 + iVar2);
    *(undefined4 *)(&stack0xffffffec + iVar2) = uVar23;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
    CVar12 = *(CCSize *)(&stack0x000000b0 + iVar2);
    *puVar31 = *(undefined4 *)(iVar26 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar60,CVar11,CVar12,(float)((ulonglong)uVar60 >> 0x20),extraout_s2_01,
              SUB41(*(undefined4 *)(&stack0x000000b4 + iVar2),0),*(_KG_Anit **)(iVar26 + 0x58));
  }
  *(int *)(&stack0x00000060 + iVar2) = (int)pcVar17 * 4;
  iVar13 = piVar6[(int)pcVar17];
  *(int *)(&stack0x00000068 + iVar2) = (int)pcVar22 * 4;
  uVar23 = *(undefined4 *)(*(int *)((int)pcVar22 * 4 + iVar13) + 0x4c);
  iVar13 = __aeabi_fcmpgt(uVar23,0);
  if (iVar13 == 0) goto LAB_000c1508;
  *(undefined4 *)(&stack0x000000c4 + iVar2) = uVar23;
  uVar23 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  *(undefined4 *)(&stack0x00000058 + iVar2) = uVar23;
  memset(&stack0x000000cc + iVar2,*(int *)(&stack0x00000050 + iVar2),0x14);
  iVar26 = *(int *)(*(int *)(&stack0x00000068 + iVar2) +
                   *(int *)(*(int *)(&stack0x00000060 + iVar2) + (int)*ppiVar5));
  iVar13 = __aeabi_fcmpgt(*(undefined4 *)(iVar26 + 0x50),DAT_000c1754);
  fVar59 = extraout_s0_00;
  fVar61 = extraout_s1;
  if ((iVar13 == 0) &&
     (iVar13 = __aeabi_fcmpgt(*(undefined4 *)(iVar26 + 0x54),DAT_000c1754), fVar59 = extraout_s0_01,
     fVar61 = extraout_s1_00, iVar13 == 0)) {
    iVar13 = *(int *)(&stack0x00000050 + iVar2);
  }
  else {
    fVar59 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000a8 + iVar2),fVar59,fVar61);
    uVar23 = cocos2d::CCMoveTo::actionWithDuration(fVar59,DAT_000c1758);
    iVar13 = 1;
    *(undefined4 *)(&stack0x000000cc + iVar2) = uVar23;
  }
  iVar26 = *(int *)((int)pcVar22 * 4 + (*ppiVar5)[(int)pcVar17]);
  *(int *)(&stack0x00000054 + iVar2) = iVar26;
  uVar23 = *(undefined4 *)(iVar26 + 0x58);
  *(undefined4 *)(&stack0x00000060 + iVar2) = uVar23;
  iVar26 = __aeabi_fcmpgt(uVar23,DAT_000c1754);
  fVar59 = extraout_s0_02;
  fVar61 = extraout_s1_01;
  fVar62 = extraout_s2;
  if ((iVar26 != 0) ||
     (iVar26 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000054 + iVar2) + 0x5c),
                              DAT_000c1754), fVar59 = extraout_s0_03, fVar61 = extraout_s1_02,
     fVar62 = extraout_s2_00, iVar26 != 0)) {
    uVar23 = cocos2d::CCScaleTo::actionWithDuration(fVar59,fVar61,fVar62);
    *(undefined4 *)(&stack0x000000cc + iVar13 * 4 + iVar2) = uVar23;
    iVar13 = iVar13 + 1;
  }
  uVar23 = *(undefined4 *)(*(int *)((int)pcVar22 * 4 + (*ppiVar5)[(int)pcVar17]) + 0x60);
  *(undefined4 *)(&stack0x00000054 + iVar2) = uVar23;
  iVar26 = __aeabi_fcmplt(uVar23,DAT_000c1760);
  if (iVar26 == 0) {
    iVar26 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000054 + iVar2),DAT_000c1764);
    if (iVar26 == 0) goto LAB_000c1482;
    fVar59 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar2));
    uVar4 = (uchar)DAT_000c175c;
  }
  else {
    uVar4 = (uchar)DAT_000c175c;
    fVar59 = extraout_s0_04;
  }
  uVar23 = cocos2d::CCFadeTo::actionWithDuration(fVar59,uVar4);
  *(undefined4 *)(&stack0x000000cc + iVar13 * 4 + iVar2) = uVar23;
  iVar13 = iVar13 + 1;
LAB_000c1482:
  uVar23 = *(undefined4 *)(*(int *)((int)pcVar22 * 4 + (*ppiVar5)[(int)pcVar17]) + 100);
  *(undefined4 *)(&stack0x00000054 + iVar2) = uVar23;
  iVar26 = __aeabi_fcmpgt(uVar23,DAT_000c1768);
  if (iVar26 == 0) {
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar2),0);
    }
  }
  else {
    uVar23 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    *(undefined4 *)(&stack0x000000cc + iVar13 * 4 + iVar2) = uVar23;
    iVar13 = iVar13 + 1;
  }
  pCVar10 = *(CCFiniteTimeAction **)(&stack0x000000cc + iVar2);
  if (iVar13 == 1) {
    uVar23 = cocos2d::CCSpawn::actions(pCVar10,0);
  }
  else {
    uVar23 = *(undefined4 *)(&stack0x000000d0 + iVar2);
    if (iVar13 == 2) {
      uVar23 = cocos2d::CCSpawn::actions(pCVar10,uVar23,0);
    }
    else {
      uVar25 = *(undefined4 *)(&stack0x000000d4 + iVar2);
      if (iVar13 == 3) {
        uVar23 = cocos2d::CCSpawn::actions(pCVar10,uVar23,uVar25,0);
      }
      else {
        uVar18 = *(undefined4 *)(&stack0x000000d8 + iVar2);
        *puVar30 = 0;
        uVar23 = cocos2d::CCSpawn::actions(pCVar10,uVar23,uVar25,uVar18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar2),uVar23,0);
}


