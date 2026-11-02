/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011825c  Symbol: Stage_Monsters */

/* Stage_Monsters(cocos2d::CCNode*, int) */

void Stage_Monsters(CCNode *param_1,int param_2)

{
  int *piVar1;
  _Unit_Stage *p_Var2;
  uint uVar3;
  int iVar4;
  float in_s0;
  float in_s1;
  CCPoint aCStack_20 [12];
  
  if (param_2 != 0) {
    cocos2d::CCPoint::CCPoint(aCStack_20,in_s0,in_s1);
    if (param_2 == DAT_00118364) {
      piVar1 = (int *)operator_new(0x130);
      Monster1900::Monster1900((Monster1900 *)piVar1);
      (**(code **)(*piVar1 + 0x128))(piVar1);
    }
    else {
      if ((param_2 + DAT_00118368 != 0) &&
         (*(int *)(**(int **)(DAT_0011836c + 0x1182a2) + 0x2c) == param_2)) {
        piVar1 = (int *)operator_new(0x130);
        Monster::Monster((Monster *)piVar1);
        iVar4 = param_2 + DAT_00118370;
        uVar3 = iVar4 >> 0x1f;
        (**(code **)(*piVar1 + 0x128))(piVar1);
        (**(code **)(*piVar1 + 0x3c))(piVar1,aCStack_20);
        (**(code **)(*piVar1 + 0x6c))(piVar1,1);
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,100,param_2);
        cocos2d::CCObject::release((CCObject *)piVar1);
        p_Var2 = (_Unit_Stage *)(**(code **)(*piVar1 + 0xa8))(piVar1);
        setNormal_Monster_State(iVar4 + uVar3 ^ uVar3,p_Var2);
        return;
      }
      piVar1 = (int *)operator_new(0x130);
      Monster::Monster((Monster *)piVar1);
      (**(code **)(*piVar1 + 0x128))(piVar1,param_2);
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1,aCStack_20);
    (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,100,param_2);
    cocos2d::CCObject::release((CCObject *)piVar1);
    p_Var2 = (_Unit_Stage *)(**(code **)(*piVar1 + 0xa8))(piVar1);
    setMonster_State(param_2,p_Var2);
  }
  return;
}


