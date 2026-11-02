/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bfd78  Symbol: vDrawScript_BG */

/* vDrawScript_BG(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int, bool) */

void vDrawScript_BG(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,
                   int param_6,bool param_7)

{
  undefined uVar1;
  int *this;
  int **ppiVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  CCTextureCache *this_00;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  _KG_Animation *p_Var11;
  undefined4 *puVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  undefined8 uVar14;
  float extraout_s1;
  undefined3 in_stack_00000009;
  int local_138;
  CCPoint aCStack_114 [8];
  CCPoint aCStack_10c [8];
  CCPoint aCStack_104 [8];
  undefined4 local_fc [2];
  CCSize aCStack_f4 [8];
  char acStack_ec [100];
  char acStack_88 [100];
  int local_24;
  
  piVar8 = *(int **)(DAT_000bfffc + 0xbfd86);
  local_24 = *piVar8;
  sprintf(acStack_ec,(char *)(DAT_000c0000 + 0xbfd9c),param_1,param_2);
  this = (int *)operator_new(0x110);
  uVar14 = cocos2d::CCLayer::CCLayer((CCLayer *)this);
  piVar6 = *(int **)(DAT_000c0004 + 0xbfdc0);
  if (*piVar6 == 2) {
    pcVar7 = *(code **)(*this + 0x3c);
    __addsf3(param_4,param_4);
    uVar14 = __addsf3(param_5,param_5);
    cocos2d::CCPoint::CCPoint(aCStack_114,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    uVar14 = (*pcVar7)(this,aCStack_114);
  }
  else {
    pcVar7 = *(code **)(*this + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_10c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    uVar14 = (*pcVar7)(this,aCStack_10c);
  }
  pcVar7 = *(code **)(*this + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_104,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar7)(this,aCStack_104);
  (**(code **)(*(int *)param_3 + 0xcc))(param_3,this,param_6,_param_7);
  ppiVar2 = (int **)operator_new(0x24);
  piVar3 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar3);
  ppiVar2[1] = piVar3;
  Init_Unit_Stage((_Unit_Stage *)ppiVar2);
  piVar3 = (int *)operator_new(0x2c);
  iVar9 = 0;
  *ppiVar2 = piVar3;
  do {
    piVar3 = *ppiVar2;
    pvVar4 = operator_new(0x298);
    piVar3[iVar9] = (int)pvVar4;
    iVar9 = iVar9 + 1;
    (*ppiVar2)[8] = 1;
  } while (iVar9 != 8);
  (*ppiVar2)[9] = 1;
  anim_Lode_copy(acStack_ec,(_KG_Anit *)**ppiVar2,param_2);
  iVar9 = 1;
  do {
    iVar10 = iVar9 + 1;
    operator_delete((void *)(*ppiVar2)[iVar9]);
    (*ppiVar2)[iVar9] = 0;
    iVar9 = iVar10;
  } while (iVar10 != 8);
  fVar13 = extraout_s0;
  for (local_138 = 0; local_138 < *(int *)(*(int *)**ppiVar2 + 4); local_138 = local_138 + 1) {
    iVar9 = local_138 * 4;
    sprintf(acStack_88,(char *)(DAT_000c0008 + 0xbfeaa),param_1,DAT_000c000c + 0xbfeac,
            *(undefined4 *)((int *)**ppiVar2)[local_138]);
    p_Var11 = *(_KG_Animation **)(iVar9 + **ppiVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)local_fc,extraout_s0_00,extraout_s1);
    piVar3 = (int *)vScriptImgDraw((CCNode *)this,acStack_88,p_Var11,*(CCSize *)(p_Var11 + 0x30),
                                   *(int *)(p_Var11 + 0x34),local_138,local_138,SUB41(local_fc[0],0)
                                  );
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000c0014 + 0xbffa6));
    }
    iVar10 = **ppiVar2;
    puVar12 = *(undefined4 **)(DAT_000c0010 + 0xbfefc);
    uVar5 = __floatsisf(*(int *)(iVar10 + 0x284) / 2);
    __subsf3(*puVar12,uVar5);
    uVar5 = __floatsisf(*(int *)(iVar10 + 0x280) / 2);
    uVar14 = __subsf3(puVar12[1],uVar5);
    cocos2d::CCSize::CCSize(aCStack_f4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    iVar10 = *(int *)(iVar9 + **ppiVar2);
    puVar12 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    *(undefined4 *)(iVar10 + 0x20) = *puVar12;
    *(undefined4 *)(iVar10 + 0x24) = puVar12[1];
    iVar10 = *piVar3;
    uVar1 = __fixunssfsi(*(undefined4 *)(*(int *)(iVar9 + **ppiVar2) + 0x38));
    (**(code **)(iVar10 + 0xec))(piVar3,uVar1);
    (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(*(int *)(iVar9 + **ppiVar2) + 0x18));
    (**(code **)(*piVar3 + 0x34))(piVar3,*(undefined4 *)(*(int *)(iVar9 + **ppiVar2) + 0x1c));
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar13 = (float)cocos2d::CCTextureCache::removeAllTextures(this_00);
  }
  if (*piVar6 == 2) {
    cocos2d::CCNode::setScale((CCNode *)this,fVar13);
  }
  (**(code **)(*this + 0xac))(this,ppiVar2);
  cocos2d::CCObject::release((CCObject *)this);
  if (local_24 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


