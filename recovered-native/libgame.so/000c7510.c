/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7510  Symbol: Draw_Number */

/* Draw_Number(cocos2d::CCLayer*, cocos2d::CCTexture2D*, char const*, cocos2d::CCPoint, int, int,
   unsigned int, float, float, bool, bool) */

void Draw_Number(CCLayer *param_1,CCTexture2D *param_2,char *param_3,CCPoint param_4,int param_5,
                int param_6,uint param_7,float param_8,float param_9,bool param_10,bool param_11)

{
  int *this;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *__format;
  CCPoint *pCVar7;
  code *pcVar8;
  int *piVar9;
  code *pcVar10;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined3 in_stack_0000000d;
  undefined3 in_stack_00000011;
  char in_stack_00000018;
  char in_stack_0000001c;
  int local_c0;
  uint local_b4;
  CCPoint aCStack_94 [8];
  CCPoint aCStack_8c [8];
  CCPoint aCStack_84 [8];
  CCPoint aCStack_7c [8];
  CCRect aCStack_74 [4];
  CCRect aCStack_64 [4];
  CCRect aCStack_54 [4];
  byte local_44 [32];
  int local_24;
  
  piVar9 = *(int **)(DAT_000c77d4 + 0xc7524);
  local_24 = *piVar9;
  memset(local_44,0,0x1e);
  if (in_stack_0000001c == '\0') {
    __format = (char *)(DAT_000c77e0 + 0xc7566);
  }
  else if (_param_10 < 10) {
    __format = (char *)(DAT_000c77dc + 0xc7560);
  }
  else {
    __format = (char *)(DAT_000c77d8 + 0xc755a);
  }
  sprintf((char *)local_44,__format,_param_10);
  this = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,param_6,param_7);
  local_b4 = _param_10;
  if (_param_10 == 0) {
    uVar1 = __mulsf3(_param_11,0);
    cocos2d::CCRect::CCRect((CCRect *)aCStack_74,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(param_2,aCStack_74);
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    pcVar8 = *(code **)(*piVar2 + 0x7c);
    if (in_stack_00000018 == '\0') {
      puVar3 = (undefined4 *)(*pcVar8)();
      uVar4 = __addsf3(param_4,*puVar3);
      uVar4 = __mulsf3(uVar4,0x3f000000);
      __addsf3(uVar4,uVar1);
      iVar5 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar1 = __addsf3(param_5,*(undefined4 *)(iVar5 + 4));
      uVar11 = __mulsf3(uVar1,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_8c,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pCVar7 = aCStack_8c;
    }
    else {
      puVar3 = (undefined4 *)(*pcVar8)();
      uVar4 = __addsf3(param_4,*puVar3);
      uVar4 = __mulsf3(uVar4,0x3f000000);
      __addsf3(uVar4,uVar1);
      iVar5 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar1 = __addsf3(param_5,*(undefined4 *)(iVar5 + 4));
      uVar11 = __mulsf3(uVar1,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_94,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pCVar7 = aCStack_94;
    }
    (*pcVar10)(piVar2,pCVar7);
    (**(code **)(*this + 0xcc))(this,piVar2,0,0);
    local_b4 = 0;
  }
  local_c0 = 0;
  while (local_b4 != 0) {
    iVar5 = 0;
    do {
      if (local_44[iVar5] == 0) goto LAB_000c77b4;
      iVar6 = local_44[iVar5] - 0x30;
      if (param_3 == (char *)0x0) {
        uVar1 = __floatsisf(iVar6);
        uVar11 = __mulsf3(uVar1,_param_11);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_54,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                   extraout_s2_01,extraout_s3_01);
        piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(param_2,aCStack_54);
      }
      else {
        uVar1 = __floatsisf(iVar6);
        uVar11 = __mulsf3(uVar1,_param_11);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_64,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                   extraout_s2_00,extraout_s3_00);
        piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(param_3,aCStack_64);
      }
      iVar6 = *piVar2;
      if (in_stack_00000018 == '\0') {
        pcVar8 = *(code **)(iVar6 + 0x3c);
        puVar3 = (undefined4 *)(**(code **)(iVar6 + 0x7c))();
        uVar1 = __addsf3(param_4,*puVar3);
        uVar1 = __mulsf3(uVar1,0x3f000000);
        uVar4 = __floatsisf(local_c0);
        uVar4 = __mulsf3(_param_11,uVar4);
        __addsf3(uVar1,uVar4);
        iVar6 = (**(code **)(*piVar2 + 0x7c))(piVar2);
        uVar1 = __addsf3(param_5,*(undefined4 *)(iVar6 + 4));
        uVar11 = __mulsf3(uVar1,0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_7c,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
        (*pcVar8)(piVar2,aCStack_7c);
      }
      else {
        pcVar8 = *(code **)(iVar6 + 0x3c);
        puVar3 = (undefined4 *)(**(code **)(iVar6 + 0x7c))();
        uVar1 = __addsf3(param_4,*puVar3);
        uVar1 = __mulsf3(uVar1,0x3f000000);
        uVar4 = __floatsisf(local_c0);
        uVar4 = __mulsf3(_param_11,uVar4);
        __addsf3(uVar1,uVar4);
        iVar6 = (**(code **)(*piVar2 + 0x7c))(piVar2);
        uVar1 = __addsf3(param_5,*(undefined4 *)(iVar6 + 4));
        uVar11 = __mulsf3(uVar1,0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_84,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
        (*pcVar8)(piVar2,aCStack_84);
      }
      (**(code **)(*this + 0xcc))(this,piVar2,iVar5,iVar5);
      iVar5 = iVar5 + 1;
      local_c0 = local_c0 + 1;
    } while (iVar5 != 0x1e);
  }
LAB_000c77b4:
  cocos2d::CCObject::release((CCObject *)this);
  if (local_24 == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


