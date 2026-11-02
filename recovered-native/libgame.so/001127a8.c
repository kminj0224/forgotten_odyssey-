/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001127a8  Symbol: Commend */

/* Commend(cocos2d::CCLayer*) */

void Commend(CCLayer *param_1)

{
  CCArray *this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int **ppiVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_2c;
  CCPoint aCStack_20 [12];
  
  iVar8 = DAT_00112ad0 + 0x1127b4;
  ppiVar9 = *(int ***)(iVar8 + DAT_00112ad4);
  this = (CCArray *)(**(code **)(**ppiVar9 + 0x58))();
  local_2c = 0;
  if (this != (CCArray *)0x0) {
    for (; uVar7 = cocos2d::CCArray::count(this), local_2c < uVar7; local_2c = local_2c + 1) {
      piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this,local_2c);
      iVar2 = (**(code **)(*piVar1 + 0xa0))();
      if (((((((iVar2 + DAT_00112ad8 != 0) && (iVar2 + DAT_00112adc != 0)) &&
             (iVar2 + DAT_00112ae0 != 0)) &&
            ((iVar2 + DAT_00112ae4 != 0 && (iVar2 + DAT_00112ae8 != 0)))) &&
           ((iVar2 + DAT_00112aec != 0 &&
            ((iVar2 + DAT_00112af0 != 0 && (iVar2 + DAT_00112af4 != 0)))))) &&
          (iVar2 + DAT_00112af8 != 0)) && ((iVar2 + DAT_00112afc != 0 && (iVar2 != -0x1e)))) {
        iVar2 = (**(code **)(*piVar1 + 0xa8))(piVar1);
        (**(code **)(***(int ***)(iVar8 + DAT_00112b00) + 0xa8))();
        if ((iVar2 != 0) && (**(int **)(iVar2 + 4) == 0)) {
          uVar3 = cocos2d::CCNode::getScale((CCNode *)param_1);
          iVar4 = __aeabi_fcmpgt(uVar3,0x3f800000);
          if (iVar4 != 0) {
            uVar3 = 0x3f800000;
          }
          puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
          uVar3 = __mulsf3(uVar3,DAT_00112b04);
          uVar6 = __subsf3(*puVar5,uVar3);
          puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
          iVar4 = __aeabi_fcmplt(uVar6,*puVar5);
          if (iVar4 == 0) {
LAB_00112cec:
            iVar4 = *(int *)(*(int *)(iVar2 + 4) + 0x120);
            if (iVar4 != 0) {
              (**(code **)(**ppiVar9 + 0xd0))(*ppiVar9,iVar4,1);
              *(undefined4 *)(*(int *)(iVar2 + 4) + 0x120) = 0;
              iVar14 = **(int **)(iVar8 + DAT_00112d08);
              iVar13 = **(int **)(iVar8 + DAT_00112d10);
              iVar4 = iVar14 + iVar13 + DAT_00112d0c;
              iVar11 = (int)*(char *)(iVar4 + 4);
              if ((iVar11 == 3) || (iVar11 == 1)) {
                iVar2 = *(int *)(iVar2 + 4);
                uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x38));
                uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar11 * 0xc +
                                                                         iVar13 * 0x6c +
                                                               DAT_00112d14) + 0xb) * 2 +
                                                    *(int *)(iVar8 + DAT_00112d18)));
                uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112d00,
                                  DAT_00112d04);
                __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                         (int)((ulonglong)uVar16 >> 0x20));
LAB_00112bae:
                uVar3 = __truncdfsf2();
                *(undefined4 *)(iVar2 + 0x38) = uVar3;
              }
              else {
                if (iVar11 == 2) {
                  iVar2 = *(int *)(iVar2 + 4);
                  uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x14));
                  uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c +
                                                                 DAT_00112d1c) + 0xb) * 2 +
                                                      *(int *)(iVar8 + DAT_00112d18)));
                  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112d00,
                                    DAT_00112d04);
LAB_00112ccc:
                  __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                           (int)((ulonglong)uVar16 >> 0x20));
                  goto LAB_00112cd0;
                }
                if (iVar11 == 4) {
                  iVar2 = *(int *)(iVar2 + 4);
                  uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
                  uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c +
                                                                 DAT_00112d20) + 0xb) * 2 +
                                                      *(int *)(iVar8 + DAT_00112d18)));
                  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112d00,
                                    DAT_00112d04);
                  __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                           (int)((ulonglong)uVar16 >> 0x20));
LAB_00112c38:
                  uVar3 = __truncdfsf2();
                  *(undefined4 *)(iVar2 + 0x24) = uVar3;
                }
                else if (iVar11 == 5) {
                  iVar12 = *(int *)(iVar2 + 4);
                  uVar15 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x38));
                  iVar11 = *(int *)(iVar8 + DAT_00112d24);
                  uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c +
                                                                 DAT_00112d28) + 0xb) * 2 + iVar11))
                  ;
                  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112d00,
                                    DAT_00112d04);
                  __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                           (int)((ulonglong)uVar16 >> 0x20));
                  uVar3 = __truncdfsf2();
                  *(undefined4 *)(iVar12 + 0x38) = uVar3;
                  iVar2 = *(int *)(iVar2 + 4);
                  uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x14));
                  uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + *(char *)(iVar4 + 4) *
                                                                           0xc + iVar13 * 0x6c +
                                                                 DAT_00112d14) + 0x16) * 2 + iVar11)
                                      );
                  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112d00,
                                    DAT_00112d04);
                  goto LAB_00112ccc;
                }
              }
            }
          }
          else {
            puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar3 = __addsf3(uVar3,*puVar5);
            puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
            iVar4 = __aeabi_fcmpgt(uVar3,*puVar5);
            if (iVar4 == 0) goto LAB_00112cec;
            iVar4 = *(int *)(iVar2 + 4);
            if (*(int *)(iVar4 + 0x120) != 0) goto LAB_00112cd6;
            uVar3 = cocos2d::CCSprite::spriteWithSpriteFrame
                              (**(CCSpriteFrame ***)(iVar8 + DAT_00112b08));
            *(undefined4 *)(iVar4 + 0x120) = uVar3;
            piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x120);
            pcVar10 = *(code **)(*piVar1 + 0x74);
            cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
            (*pcVar10)(piVar1,aCStack_20);
            (**(code **)(**ppiVar9 + 0xcc))
                      (*ppiVar9,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x120),1,0x3e0);
            iVar14 = **(int **)(iVar8 + DAT_00112b0c);
            iVar13 = **(int **)(iVar8 + DAT_00112b14);
            iVar4 = iVar14 + iVar13 + DAT_00112b10;
            iVar11 = (int)*(char *)(iVar4 + 4);
            if ((iVar11 == 3) || (iVar11 == 1)) {
              iVar2 = *(int *)(iVar2 + 4);
              uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x38));
              uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar11 * 0xc + iVar13 * 0x6c
                                                             + DAT_00112b18) + 0xb) * 2 +
                                                  *(int *)(iVar8 + DAT_00112b1c)));
              uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112ac8,
                                DAT_00112acc);
              __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                       (int)((ulonglong)uVar16 >> 0x20));
              goto LAB_00112bae;
            }
            if (iVar11 != 2) {
              if (iVar11 != 4) {
                if (iVar11 != 5) goto LAB_00112cd6;
                iVar12 = *(int *)(iVar2 + 4);
                uVar15 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x38));
                iVar11 = *(int *)(iVar8 + DAT_00112b28);
                uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c +
                                                               DAT_00112b2c) + 0xb) * 2 + iVar11));
                uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112ac8,
                                  DAT_00112acc);
                __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                         (int)((ulonglong)uVar16 >> 0x20));
                uVar3 = __truncdfsf2();
                *(undefined4 *)(iVar12 + 0x38) = uVar3;
                iVar2 = *(int *)(iVar2 + 4);
                uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x14));
                uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + *(char *)(iVar4 + 4) * 0xc
                                                                         + iVar13 * 0x6c +
                                                               DAT_00112b18) + 0x16) * 2 + iVar11));
                uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112ac8,
                                  DAT_00112acc);
                goto LAB_00112ac0;
              }
              iVar2 = *(int *)(iVar2 + 4);
              uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
              uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c + DAT_00112b24)
                                                   + 0xb) * 2 + *(int *)(iVar8 + DAT_00112b1c)));
              uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112ac8,
                                DAT_00112acc);
              __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                       (int)((ulonglong)uVar16 >> 0x20));
              goto LAB_00112c38;
            }
            iVar2 = *(int *)(iVar2 + 4);
            uVar15 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x14));
            uVar16 = __floatsidf((int)*(short *)((*(char *)(iVar14 + iVar13 * 0x6c + DAT_00112b20) +
                                                 0xb) * 2 + *(int *)(iVar8 + DAT_00112b1c)));
            uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00112ac8,DAT_00112acc
                             );
LAB_00112ac0:
            __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                     (int)((ulonglong)uVar16 >> 0x20));
LAB_00112cd0:
            uVar3 = __truncdfsf2();
            *(undefined4 *)(iVar2 + 0x14) = uVar3;
          }
        }
      }
LAB_00112cd6:
    }
  }
  return;
}


