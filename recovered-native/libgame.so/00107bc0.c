/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00107bc0  Symbol: KG_Boss_Draw */

/* KG_Boss_Draw(cocos2d::CCLayer*, cocos2d::CCNode*) */

void KG_Boss_Draw(CCLayer *param_1,CCNode *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar9;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  _ccColor4B local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bd;
  _ccColor4B local_bc;
  undefined local_bb;
  undefined local_ba;
  undefined local_b9;
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  CCRect aCStack_88 [12];
  int local_7c;
  CCRect aCStack_78 [16];
  CCRect aCStack_68 [16];
  CCRect aCStack_58 [16];
  CCRect aCStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  iVar8 = DAT_00107e7c;
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  ppiVar5 = *(int ***)(iVar8 + 0x107bda);
  piVar1 = *ppiVar5;
  (**(code **)(*piVar1 + 0xd8))(piVar1,param_1,DAT_00107e80);
  (**(code **)(*(int *)param_1 + 0xac))(param_1,iVar2);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = DAT_00107e84;
  *(undefined *)(*(int *)(iVar2 + 4) + 0xd) = 0;
  iVar8 = *(int *)(iVar2 + 4);
  uVar3 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  *(undefined4 *)(iVar8 + 4) = uVar3;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 0xffffffff;
  **(undefined4 **)(iVar2 + 4) = 3;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x40) = DAT_00107e88;
  *(undefined *)(*(int *)(iVar2 + 4) + 0x2c) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x50) = 0;
  *(undefined *)(*(int *)(iVar2 + 4) + 0x34) = 0;
  *(CCLayer **)(*(int *)(iVar2 + 4) + 0x11c) = param_1;
  cocos2d::CCRect::CCRect((CCRect *)&local_98);
  uVar9 = cocos2d::CCRect::CCRect(aCStack_88);
  iVar8 = *(int *)(*(int *)(iVar2 + 4) + 4);
  if (((iVar8 + DAT_00107e8c == 0) || (iVar8 + DAT_00107e90 == 0)) || (iVar8 == DAT_00107e94)) {
    pcVar6 = *(code **)(*(int *)param_1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    uVar9 = (*pcVar6)(param_1,aCStack_b8);
    *(undefined *)(*(int *)(iVar2 + 4) + 0x84) = 0;
    cocos2d::CCRect::CCRect
              (aCStack_78,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2,extraout_s3);
    memcpy(&local_98,aCStack_78,0x10);
    cocos2d::CCRect::CCRect(aCStack_68,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00);
    memcpy(aCStack_88,aCStack_68,0x10);
    if (*(int *)(*(int *)(iVar2 + 4) + 4) == DAT_00107ea4) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 0xd8) = 6;
    }
    iVar8 = *(int *)(iVar2 + 4);
  }
  else {
    uVar9 = (**(code **)(*(int *)param_1 + 0x6c))(param_1);
    pcVar6 = *(code **)(*(int *)param_1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    uVar9 = (*pcVar6)(param_1,aCStack_b0);
    *(undefined *)(*(int *)(iVar2 + 4) + 0x84) = 1;
    cocos2d::CCRect::CCRect
              (aCStack_58,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2_03,
               extraout_s3_03);
    memcpy(&local_98,aCStack_58,0x10);
    cocos2d::CCRect::CCRect(aCStack_48,extraout_s0_03,extraout_s1_03,extraout_s2_04,extraout_s3_04);
    memcpy(aCStack_88,aCStack_48,0x10);
    iVar8 = *(int *)(iVar2 + 4);
    if (*(int *)(iVar8 + 4) != DAT_00107ec0) goto LAB_00107ce4;
  }
  uVar3 = cocos2d::CCArray::arrayWithCapacity(0x28);
  *(undefined4 *)(iVar8 + 0x138) = uVar3;
  cocos2d::CCObject::retain(*(CCObject **)(*(int *)(iVar2 + 4) + 0x138));
LAB_00107ce4:
  iVar8 = *(int *)(iVar2 + 4);
  uVar3 = __mulsf3(local_90 + -0x80000000,0x3f000000);
  __addsf3(uVar3,local_98);
  uVar3 = __mulsf3(local_8c + -0x80000000,0x3f000000);
  uVar9 = __addsf3(uVar3,local_94);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2_01,
             extraout_s3_01);
  *(undefined4 *)(iVar8 + 0xf8) = local_38;
  *(undefined4 *)(iVar8 + 0xfc) = uStack_34;
  *(undefined4 *)(iVar8 + 0x100) = uStack_30;
  *(undefined4 *)(iVar8 + 0x104) = local_2c;
  iVar7 = *(int *)(iVar2 + 4);
  uVar3 = __mulsf3(*(undefined4 *)(iVar7 + 0x100),0x3f000000,(undefined4 *)(iVar8 + 0x104),
                   iVar7 + 0xfc,local_8c);
  __addsf3(uVar3,local_98);
  uVar9 = __mulsf3(local_7c + -0x80000000,0x3f000000);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2_02,
             extraout_s3_02);
  *(undefined4 *)(iVar7 + 0x108) = local_28;
  *(undefined4 *)(iVar7 + 0x10c) = uStack_24;
  *(undefined4 *)(iVar7 + 0x110) = uStack_20;
  *(undefined4 *)(iVar7 + 0x114) = local_1c;
  piVar1 = (int *)cocos2d::CCLayer::node();
  local_c0 = (_ccColor4B)0x0;
  local_bf = 0;
  local_be = 0;
  local_bd = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_c0,extraout_s0_00,extraout_s1_00);
  pcVar6 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_a8,extraout_s0_01,extraout_s1_01);
  (*pcVar6)(piVar4,aCStack_a8);
  uVar9 = (**(code **)(*piVar1 + 0xcc))(piVar1,piVar4,0,0);
  local_bc = (_ccColor4B)0xff;
  local_bb = 0;
  local_ba = 0;
  local_b9 = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_bc,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  pcVar6 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_02,extraout_s1_02);
  (*pcVar6)(piVar4,aCStack_a0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar4,1,1);
  piVar4 = *ppiVar5;
  (**(code **)(*piVar4 + 0xcc))(piVar4,piVar1,DAT_00107eb0,DAT_00107eb4);
  *(int **)(*(int *)(iVar2 + 4) + 0x128) = piVar1;
  return;
}


