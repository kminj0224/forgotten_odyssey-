/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bfa78  Symbol: vDrawScript */

/* vDrawScript(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int) */

void vDrawScript(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,int param_6
                )

{
  undefined uVar1;
  int *this;
  int **ppiVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  CCTextureCache *this_00;
  _KG_Animation *p_Var6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  float extraout_s0;
  float fVar14;
  undefined8 uVar15;
  undefined4 in_stack_00000008;
  int local_144;
  CCPoint aCStack_124 [8];
  CCPoint aCStack_11c [8];
  CCPoint aCStack_114 [8];
  CCSize local_10c;
  int local_108;
  CCSize local_104 [2];
  CCSize local_fc [8];
  CCSize aCStack_f4 [8];
  char acStack_ec [100];
  char acStack_88 [100];
  int local_24;
  
  piVar9 = *(int **)(DAT_000bfd58 + 0xbfa86);
  local_24 = *piVar9;
  sprintf(acStack_ec,(char *)(DAT_000bfd5c + 0xbfa98),param_1,param_2);
  this = (int *)operator_new(0x110);
  uVar15 = cocos2d::CCLayer::CCLayer((CCLayer *)this);
  piVar7 = *(int **)(DAT_000bfd60 + 0xbfaba);
  if (*piVar7 == 2) {
    pcVar8 = *(code **)(*this + 0x3c);
    __addsf3(param_4,param_4);
    uVar15 = __addsf3(param_5,param_5);
    cocos2d::CCPoint::CCPoint(aCStack_124,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    uVar15 = (*pcVar8)(this,aCStack_124);
  }
  else {
    pcVar8 = *(code **)(*this + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_11c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    uVar15 = (*pcVar8)(this,aCStack_11c);
  }
  pcVar8 = *(code **)(*this + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_114,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  (*pcVar8)(this,aCStack_114);
  (**(code **)(*(int *)param_3 + 0xcc))(param_3,this,param_6,in_stack_00000008);
  ppiVar2 = (int **)operator_new(0x24);
  piVar3 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar3);
  ppiVar2[1] = piVar3;
  Init_Unit_Stage((_Unit_Stage *)ppiVar2);
  piVar3 = (int *)operator_new(0x2c);
  iVar10 = 0;
  *ppiVar2 = piVar3;
  do {
    piVar3 = *ppiVar2;
    pvVar4 = operator_new(0x298);
    piVar3[iVar10] = (int)pvVar4;
    iVar10 = iVar10 + 1;
    (*ppiVar2)[8] = 1;
  } while (iVar10 != 8);
  (*ppiVar2)[9] = 1;
  anim_Lode_copy(acStack_ec,(_KG_Anit *)**ppiVar2,param_2);
  iVar10 = 1;
  do {
    iVar11 = iVar10 + 1;
    operator_delete((void *)(*ppiVar2)[iVar10]);
    (*ppiVar2)[iVar10] = 0;
    iVar10 = iVar11;
  } while (iVar11 != 8);
  fVar14 = extraout_s0;
  for (local_144 = 0; local_144 < *(int *)(*(int *)**ppiVar2 + 4); local_144 = local_144 + 1) {
    iVar10 = local_144 * 4;
    sprintf(acStack_88,(char *)(DAT_000bfd64 + 0xbfba4),param_1,DAT_000bfd68 + 0xbfba6,
            *(undefined4 *)((int *)**ppiVar2)[local_144]);
    iVar11 = **ppiVar2;
    p_Var6 = *(_KG_Animation **)(iVar10 + iVar11);
    __floatsisf(*(undefined4 *)(iVar11 + 0x284));
    uVar15 = __floatsisf(*(undefined4 *)(iVar11 + 0x280));
    uVar15 = cocos2d::CCSize::CCSize
                       ((CCSize *)&local_10c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)local_104,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20))
    ;
    iVar11 = **ppiVar2;
    __floatsisf(*(undefined4 *)(iVar11 + 0x288));
    uVar15 = __floatsisf(*(undefined4 *)(iVar11 + 0x28c));
    cocos2d::CCSize::CCSize(local_fc,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    piVar3 = (int *)vScriptImgDraw_Fram((CCNode *)this,acStack_88,p_Var6,local_10c,local_108,
                                        local_144,local_144,local_104[0]);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000bfd74 + 0xbfd02));
    }
    iVar11 = **ppiVar2;
    puVar12 = *(undefined4 **)(DAT_000bfd6c + 0xbfc48);
    uVar5 = __floatsisf(*(int *)(iVar11 + 0x284) / 2);
    __subsf3(*puVar12,uVar5);
    uVar5 = __floatsisf(*(int *)(iVar11 + 0x280) / 2);
    uVar15 = __subsf3(puVar12[1],uVar5);
    cocos2d::CCSize::CCSize(aCStack_f4,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    iVar11 = *(int *)(iVar10 + **ppiVar2);
    puVar12 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    uVar5 = DAT_000bfd70;
    *(undefined4 *)(iVar11 + 0x20) = *puVar12;
    *(undefined4 *)(iVar11 + 0x24) = puVar12[1];
    uVar13 = *(undefined4 *)(*(int *)(iVar10 + **ppiVar2) + 0x38);
    iVar10 = __aeabi_fcmpeq(uVar13,uVar5);
    iVar11 = *piVar3;
    if (iVar10 == 0) {
      uVar1 = __fixunssfsi(uVar13);
      pcVar8 = *(code **)(iVar11 + 0xec);
    }
    else {
      pcVar8 = *(code **)(iVar11 + 0xec);
      uVar1 = 0xff;
    }
    (*pcVar8)(piVar3,uVar1);
    (**(code **)(*piVar3 + 0x2c))
              (piVar3,*(undefined4 *)(*(int *)(local_144 * 4 + **ppiVar2) + 0x18));
    (**(code **)(*piVar3 + 0x34))
              (piVar3,*(undefined4 *)(*(int *)(local_144 * 4 + **ppiVar2) + 0x1c));
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar14 = (float)cocos2d::CCTextureCache::removeAllTextures(this_00);
  }
  if (*piVar7 == 2) {
    cocos2d::CCNode::setScale((CCNode *)this,fVar14);
  }
  (**(code **)(*this + 0xac))(this,ppiVar2);
  cocos2d::CCObject::release((CCObject *)this);
  if (local_24 != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


