/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e47bc  Symbol: Draw_Unit */

/* Market_Unit::Draw_Unit(int) */

void __thiscall Market_Unit::Draw_Unit(Market_Unit *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CCPoint *pCVar5;
  _ccColor3B *p_Var6;
  char *pcVar7;
  undefined uVar8;
  int iVar9;
  int iVar10;
  N_Draw_Number *pNVar11;
  code *pcVar12;
  int *piVar13;
  int *piVar14;
  undefined4 extraout_s0;
  undefined8 uVar15;
  undefined4 extraout_s1;
  float fVar16;
  undefined local_c0;
  undefined local_bc;
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar1 = DAT_000e4b4c;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  iVar1 = iVar1 + 0xe47da;
  if (((*(int *)(this + 0x138) == param_1) && (*(int *)(this + 0x140) != 1)) &&
     (*(int *)(this + 0x140) != 2)) {
    FUN_000e521e();
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,7);
  if (iVar2 != 0) {
    pcVar12 = *(code **)(*(int *)this + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,7);
    (*pcVar12)(this,uVar3,1);
  }
  *(int *)(this + 0x138) = param_1;
  piVar14 = *(int **)(iVar1 + DAT_000e4b50);
  piVar13 = *(int **)(iVar1 + DAT_000e4b54);
  if (param_1 == 0) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4b58);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit1::Unit_init_layer((Unit1 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_b8);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4b64),0x6e);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4b68 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4b6c + 0xe48ce);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_b0;
  }
  else if (param_1 == 2) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4b78);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit120::Unit_init_layer((Unit120 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_a8);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4b7c),0x78);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4b80 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4b84 + 0xe4998);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_a0;
  }
  else if (param_1 == 1) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4b88);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit2::Unit_init_layer((Unit2 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_98);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4b8c),0x82);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4b90 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4b94 + 0xe4a62);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_90;
  }
  else if (param_1 == 3) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4b98);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit150::Unit_init_layer((Unit150 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_88);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4b9c),0x96);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4ba0 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4ba4 + 0xe4b2e);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_80;
  }
  else if (param_1 == 6) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4ed4);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit3::Unit_init_layer((Unit3 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_78);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4ee0),0xa0);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4ee4 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4ee8 + 0xe4c56);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_70;
  }
  else if (param_1 == 7) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4ef4);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit4::Unit_init_layer((Unit4 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_68);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4ef8),0xaa);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4efc + 4)) {
      Draw_Limit((CCNode *)piVar4,true);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4f00 + 0xe4d22);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_60;
  }
  else if (param_1 == 8) {
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4f04);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit5::Unit_init_layer((Unit5 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_58);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4f08),0xb4);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4f0c + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4f10 + 0xe4dec);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_50;
  }
  else if (param_1 == 4) {
    piVar4 = (int *)operator_new(0x140);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e4f18);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit6::Unit_init_layer((Unit6 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_48);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e4f1c),0xe6);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e4f20 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e4f24 + 0xe4eb8);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_40;
  }
  else {
    if (param_1 != 5) goto LAB_000e4ff4;
    piVar4 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar4);
    iVar2 = *(int *)(iVar1 + DAT_000e5224);
    *piVar4 = iVar2 + 8;
    piVar4[0x3f] = iVar2 + 0x13c;
    piVar4[0x40] = iVar2 + 0x16c;
    piVar4[0x41] = iVar2 + 0x178;
    uVar15 = Unit7::Unit_init_layer((Unit7 *)piVar4);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar4,aCStack_38);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,7,7);
    cocos2d::CCObject::release((CCObject *)piVar4);
    Draw_Unit_Point(this,*(bool *)(*piVar14 + *piVar13 * 9 + DAT_000e5230),0x104);
    if (0x14 < *(int *)(*piVar14 + *piVar13 * 0x24 + DAT_000e5234 + 4)) {
      Draw_Limit((CCNode *)piVar4);
    }
    uVar15 = (**(code **)(**(int **)(this + 0x124) + 0x11c))
                       (*(int **)(this + 0x124),DAT_000e5238 + 0xe4fd8);
    piVar4 = *(int **)(this + 0x124);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    pCVar5 = aCStack_30;
  }
  (*pcVar12)(piVar4,pCVar5);
LAB_000e4ff4:
  (**(code **)(**(int **)(this + 0x124) + 0x120))();
  BG_Text_Draw((char *)this);
  iVar9 = *piVar14;
  iVar2 = *piVar13 * 9 + param_1;
  if (*(int *)(iVar9 + (*piVar13 * 9 + *(int *)(this + 0x138) + DAT_000e5244) * 4 + 4) < 0x14) {
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(this + 0x114),
               (*(int *)(iVar9 + (iVar2 + DAT_000e5244) * 4 + 4) + -1) * *(int *)(this + 0x144) +
               *(int *)(this + 0x14c),2);
    N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(this + 0x118),*(int *)(this + 0x144),2);
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(this + 0x11c),
               *(int *)(this + 0x148) *
               (*(int *)(*piVar14 + (*piVar13 * 9 + param_1 + DAT_000e5244) * 4 + 4) + -1) +
               *(int *)(this + 0x150),2);
    pNVar11 = *(N_Draw_Number **)(this + 0x120);
    iVar1 = *(int *)(this + 0x148);
  }
  else {
    iVar10 = *(int *)(iVar1 + DAT_000e5248);
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(this + 0x114),
               (*(int *)(iVar9 + (iVar2 + DAT_000e5244) * 4 + 4) + -0x14) *
               *(int *)(iVar10 + *(int *)(this + 0x138) * 0x2c + 0x24) +
               *(int *)(this + 0x144) * 0x13 + *(int *)(this + 0x14c),2);
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(this + 0x118),
               *(int *)(iVar10 + *(int *)(this + 0x138) * 0x2c + 0x24),2);
    iVar2 = *(int *)(this + 0x148);
    pNVar11 = *(N_Draw_Number **)(this + 0x11c);
    iVar9 = *(int *)(this + 0x150);
    iVar1 = __divsi3((*(int *)(*piVar14 + (*piVar13 * 9 + param_1 + DAT_000e5244) * 4 + 4) + -0x14)
                     * *(int *)(iVar10 + *(int *)(this + 0x138) * 0x2c + 0x28),10);
    N_Draw_Number::SetNumber_Re(pNVar11,iVar2 * 0x13 + iVar9 + iVar1,2);
    pNVar11 = *(N_Draw_Number **)(this + 0x120);
    iVar1 = __divsi3(*(undefined4 *)(iVar10 + *(int *)(this + 0x138) * 0x2c + 0x28),10);
  }
  N_Draw_Number::SetNumber_Re(pNVar11,iVar1,2);
  if (*(char *)(*piVar14 + *piVar13 * 9 + param_1 + DAT_000e524c) == '\0') {
    pNVar11 = *(N_Draw_Number **)(this + 0x110);
    iVar1 = *(int *)(this + 0x154);
  }
  else {
    pNVar11 = *(N_Draw_Number **)(this + 0x110);
    iVar1 = *(int *)(this + 0x154);
  }
  N_Draw_Number::SetMoney_Re(pNVar11,iVar1,0);
  iVar1 = DAT_000e5250;
  iVar2 = *piVar13;
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x154);
  pNVar11 = *(N_Draw_Number **)(this + 0x110);
  uVar8 = 0xff;
  if (*(int *)(*piVar14 + (iVar2 + iVar1) * 4 + 4) < *(int *)(this + 0x158)) {
    p_Var6 = (_ccColor3B *)&local_c0;
    local_c0 = 0xff;
    uVar8 = 0x7f;
  }
  else {
    p_Var6 = (_ccColor3B *)&local_bc;
    local_bc = 0xff;
  }
  *(undefined *)((int)p_Var6 + 1) = uVar8;
  *(undefined *)((int)p_Var6 + 2) = uVar8;
  N_Draw_Number::SetColor(pNVar11,p_Var6);
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  uVar15 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    pcVar12 = *(code **)(*(int *)this + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,8);
    uVar15 = (*pcVar12)(this,uVar3,1);
  }
  fVar16 = (float)((ulonglong)uVar15 >> 0x20);
  if (*(int *)(*piVar14 + (*piVar13 * 9 + param_1 + DAT_000e5244) * 4 + 4) < 0x14) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar15,fVar16);
    pcVar7 = (char *)(DAT_000e525c + 0xe51fa);
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar15,fVar16);
    pcVar7 = (char *)(DAT_000e5260 + 0xe521a);
    local_28 = local_20;
    local_24 = local_1c;
  }
  vDrawFrame((CCNode *)this,pcVar7,local_28,local_24,8);
  return;
}


