/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001081e4  Symbol: Bullet_Draw2 */

/* Bullet_Draw2(cocos2d::CCNode*, cocos2d::CCSprite*, cocos2d::CCPoint, int, int, int, bool, bool)
    */

int * Bullet_Draw2(CCNode *param_1,CCSprite *param_2,CCPoint param_3,int param_4,int param_5,
                  int param_6,bool param_7,bool param_8)

{
  int *piVar1;
  CCTexture2D *pCVar2;
  uint *puVar3;
  uint uVar4;
  CCActionInterval *pCVar5;
  CCAction *pCVar6;
  int iVar7;
  int iVar8;
  float extraout_s0;
  undefined8 uVar9;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined3 in_stack_00000009;
  undefined in_stack_00000010;
  CCRect aCStack_68 [16];
  CCRect aCStack_58 [16];
  CCRect aCStack_48 [16];
  CCRect aCStack_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  cocos2d::CCRect::CCRect(aCStack_68);
  cocos2d::CCRect::CCRect(aCStack_58);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(param_1,param_6);
  (**(code **)(*piVar1 + 0xa8))();
  pCVar2 = (CCTexture2D *)(**(code **)(*(int *)param_2 + 0x118))(param_2);
  piVar1 = (int *)vDrawTexture(param_1,pCVar2,param_3,param_4,param_5);
  puVar3 = (uint *)operator_new(0x78);
  cocos2d::CCRect::CCRect((CCRect *)(puVar3 + 0x16));
  cocos2d::CCRect::CCRect((CCRect *)(puVar3 + 0x1a));
  puVar3[5] = param_3;
  *puVar3 = (uint)(1000 < param_6);
  *(undefined *)(puVar3 + 7) = 0;
  *(undefined *)((int)puVar3 + 0x19) = 0;
  *(undefined *)(puVar3 + 6) = 0;
  *(undefined *)((int)puVar3 + 0x1b) = 0;
  *(undefined *)((int)puVar3 + 0x1a) = 0;
  uVar4 = __floatsisf(_param_7);
  puVar3[3] = DAT_00108384;
  puVar3[4] = 0;
  puVar3[8] = 3;
  puVar3[1] = uVar4;
  puVar3[2] = uVar4;
  *(bool *)((int)puVar3 + 0x1d) = param_8;
  *(undefined *)((int)puVar3 + 0x1e) = in_stack_00000010;
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 4;
    *(undefined4 *)((int)puVar3 + iVar7 + 0x24) = 0;
    iVar7 = iVar8;
  } while (iVar8 != 0x28);
  if (param_6 == 0xa0) {
    *(undefined *)((int)puVar3 + 0x19) = 1;
    puVar3[3] = DAT_00108388;
  }
  uVar9 = (**(code **)(*piVar1 + 0xac))(piVar1,puVar3);
  if ((((param_6 + DAT_0010838c != 0) && (param_6 + DAT_00108390 != 0)) &&
      (param_6 + DAT_00108394 != 0)) && (param_6 + DAT_00108398 != 0)) {
    if ((param_6 + DAT_0010839c != 0) && (param_6 + DAT_001083a0 != 0)) goto LAB_00108304;
    uVar9 = (**(code **)(*piVar1 + 0x108))(piVar1,0x3fc00000);
  }
  pCVar5 = (CCActionInterval *)
           cocos2d::CCRotateBy::actionWithDuration((float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  pCVar6 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar5);
  cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar6);
LAB_00108304:
  (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar9 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  cocos2d::CCRect::CCRect
            (aCStack_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2,extraout_s3);
  memcpy(aCStack_68,aCStack_48,0x10);
  cocos2d::CCRect::CCRect(aCStack_38,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00);
  memcpy(aCStack_58,aCStack_38,0x10);
  (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar9 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2_01,
             extraout_s3_01);
  puVar3[0x16] = local_28;
  puVar3[0x17] = uStack_24;
  puVar3[0x18] = uStack_20;
  puVar3[0x19] = local_1c;
  return piVar1;
}


