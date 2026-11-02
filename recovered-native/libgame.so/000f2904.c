/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2904  Symbol: Hero_Skill_Button_Effect */

/* Hero_Skill_Button_Effect(void*) */

undefined8 Hero_Skill_Button_Effect(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  _ccColor3B _Var3;
  undefined4 in_r1;
  int iVar4;
  undefined local_18;
  undefined uStack_17;
  undefined uStack_16;
  undefined uStack_15;
  undefined local_14;
  undefined uStack_13;
  undefined uStack_12;
  undefined uStack_11;
  
  local_14 = (undefined)in_r1;
  uStack_13 = (undefined)((uint)in_r1 >> 8);
  uStack_12 = (undefined)((uint)in_r1 >> 0x10);
  uStack_11 = (undefined)((uint)in_r1 >> 0x18);
  local_18 = SUB41(param_1,0);
  uStack_17 = (undefined)((uint)param_1 >> 8);
  uStack_16 = (undefined)((uint)param_1 >> 0x10);
  uStack_15 = (undefined)((uint)param_1 >> 0x18);
  iVar4 = DAT_000f29c8 + 0xf2912;
  if (*(int *)(*(int *)((int)param_1 + 4) + 100) == 2) {
    Get_Mana((int)*(char *)(*(int *)(iVar4 + DAT_000f29cc) +
                            (*(char *)(**(int **)(iVar4 + DAT_000f29d0) +
                                       **(int **)(iVar4 + DAT_000f29d4) + DAT_000f29d8 + 4) + -1) *
                            0xb + 1));
    uVar1 = __floatsisf();
    iVar2 = __aeabi_fcmple(uVar1,*(undefined4 *)(**(int **)(iVar4 + DAT_000f29dc) + 8));
    if (iVar2 == 0) goto LAB_000f2954;
LAB_000f299c:
    Hero_Skill_Button_Effect_Visible(true);
    local_18 = 0xff;
    uStack_17 = 0xff;
    uStack_16 = 0xff;
    _Var3 = CONCAT13(uStack_15,0xffffff);
  }
  else {
LAB_000f2954:
    if (*(int *)(*(int *)((int)param_1 + 4) + 100) == 3) {
      Get_Mana((int)*(char *)(*(int *)(iVar4 + DAT_000f29cc) +
                              (*(char *)(**(int **)(iVar4 + DAT_000f29d0) +
                                         **(int **)(iVar4 + DAT_000f29d4) + DAT_000f29d8 + 4) + -1)
                              * 0xb + 1));
      uVar1 = __floatsisf();
      iVar4 = __aeabi_fcmple(uVar1,*(undefined4 *)(**(int **)(iVar4 + DAT_000f29dc) + 8));
      if (iVar4 != 0) goto LAB_000f299c;
    }
    Hero_Skill_Button_Effect_Visible(false);
    local_14 = 100;
    uStack_13 = 100;
    uStack_12 = 100;
    _Var3 = CONCAT13(uStack_11,0x646464);
  }
  Hero_Skill_Button_Effect_Color(_Var3);
  return CONCAT17(uStack_11,
                  CONCAT16(uStack_12,
                           CONCAT15(uStack_13,
                                    CONCAT14(local_14,CONCAT13(uStack_15,
                                                               CONCAT12(uStack_16,
                                                                        CONCAT11(uStack_17,local_18)
                                                                       ))))));
}


