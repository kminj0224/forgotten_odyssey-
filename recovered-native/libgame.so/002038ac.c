/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002038ac  Symbol: __do_dyncast */

/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

int __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,int param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  __vmi_class_type_info *p_Var7;
  uint uVar8;
  undefined4 uVar9;
  __class_type_info *p_Var10;
  void *pvVar11;
  int *piVar12;
  uint local_64;
  uint local_58;
  int local_54;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if ((*(uint *)(param_7 + 0x10) & 0x10) != 0) {
    *(undefined4 *)(param_7 + 0x10) = *(undefined4 *)(this + 8);
  }
  if ((param_4 == param_6) && (iVar3 = FUN_00203530(this,param_5), iVar3 != 0)) {
    *(__sub_kind *)(param_7 + 8) = param_2;
  }
  else {
    iVar3 = FUN_00203530(this,param_3);
    if (iVar3 == 0) {
      if (param_1 < 0) {
        local_64 = 0;
      }
      else {
        local_64 = (int)param_6 - param_1;
      }
      local_54 = 0;
      bVar2 = true;
      bVar1 = false;
      do {
        iVar3 = *(int *)(this + 0xc);
        p_Var7 = this + (iVar3 + 2) * 8;
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          uVar4 = *(uint *)(this + iVar3 * 8 + 0x14);
          local_2c = *(uint *)(param_7 + 0x10);
          iVar6 = (int)uVar4 >> 8;
                    /* WARNING: Load size is inaccurate */
          if ((uVar4 & 1) != 0) {
            iVar6 = *(int *)(*param_4 + iVar6);
          }
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          if ((local_64 == 0) || (local_64 < (uint)((int)param_4 + iVar6) != bVar2)) {
            if (((uVar4 & 2) == 0) && ((param_1 == -2 && ((local_2c & 3) == 0)))) {
              p_Var7 = p_Var7 + -8;
            }
            else {
              piVar12 = &local_3c;
              p_Var10 = param_5;
              pvVar11 = param_6;
              iVar6 = (**(code **)(**(int **)(p_Var7 + -8) + 0x1c))(*(int **)(p_Var7 + -8),param_1);
              local_58 = local_30;
              uVar4 = local_34 | *(uint *)(param_7 + 8);
              *(uint *)(param_7 + 8) = uVar4;
              if (local_30 == 6 || local_30 == 2) {
                *(int *)param_7 = local_3c;
                *(uint *)(param_7 + 4) = local_38;
                *(uint *)(param_7 + 0xc) = local_30;
                return iVar6;
              }
              iVar5 = *(int *)param_7;
              if (local_54 == 0) {
                if (iVar5 != 0) {
LAB_00203a3c:
                  if (iVar5 == local_3c) {
                    *(uint *)(param_7 + 4) = *(uint *)(param_7 + 4) | local_38;
                  }
                  else if ((local_3c != 0) || (iVar6 != 0)) goto LAB_00203a50;
                  goto LAB_00203ad8;
                }
                *(int *)param_7 = local_3c;
                *(uint *)(param_7 + 4) = local_38;
                local_54 = iVar6;
                if (local_3c == 0) goto LAB_00203ad8;
                if (uVar4 != 0) {
                  if ((*(uint *)(this + 8) & 1) == 0) {
                    return iVar6;
                  }
                  goto LAB_00203ad8;
                }
              }
              else {
                if (iVar5 != 0) goto LAB_00203a3c;
                if (local_3c == 0) goto LAB_00203ad8;
LAB_00203a50:
                uVar8 = *(uint *)(param_7 + 0xc);
                if ((3 < (int)uVar4) &&
                   (((uVar4 & 1) == 0 || ((*(uint *)(param_7 + 0x10) & 2) == 0)))) {
                  if (uVar8 == 0) {
                    uVar8 = 1;
                  }
                  if (local_30 == 0) {
LAB_00203b74:
                    local_58 = 1;
                  }
                  goto LAB_00203a88;
                }
                if (0 < (int)uVar8) goto LAB_00203b4c;
                if ((3 < (int)local_30) &&
                   (((local_30 & 1) == 0 || ((*(uint *)(this + 8) & 2) == 0)))) {
                  uVar8 = 1;
                  goto LAB_00203a88;
                }
                if (param_1 < 0) {
                  if (param_1 == -2) goto LAB_00203c88;
                  uVar8 = (**(code **)(*(int *)param_3 + 0x20))
                                    (param_3,param_1,iVar5,param_5,param_6,p_Var10,pvVar11,piVar12);
                }
                else if (param_6 == (void *)(iVar5 + param_1)) {
                  uVar8 = 6;
                }
                else {
LAB_00203c88:
                  uVar8 = 1;
                }
LAB_00203b4c:
                if (0 < (int)local_58) goto LAB_00203a88;
                if ((int)uVar8 < 4) {
LAB_00203b94:
                  if (param_1 < 0) {
                    if (param_1 == -2) goto LAB_00203b74;
                    local_58 = (**(code **)(*(int *)param_3 + 0x20))
                                         (param_3,param_1,local_3c,param_5,param_6);
                  }
                  else {
                    if (param_6 != (void *)(local_3c + param_1)) goto LAB_00203bc4;
                    local_58 = 6;
                  }
LAB_00203a88:
                  uVar4 = uVar8 ^ local_58;
                }
                else {
                  if ((uVar8 & 1) != 0) {
                    if ((*(uint *)(this + 8) & 2) == 0) goto LAB_00203b74;
                    goto LAB_00203b94;
                  }
LAB_00203bc4:
                  local_58 = 1;
                  uVar4 = uVar8 ^ 1;
                }
                if ((int)uVar4 < 4) {
                  if (3 < (int)(uVar8 & local_58)) {
                    *(undefined4 *)param_7 = 0;
                    *(undefined4 *)(param_7 + 0xc) = 2;
                    return 1;
                  }
                  *(undefined4 *)param_7 = 0;
                  *(undefined4 *)(param_7 + 0xc) = 1;
                  uVar4 = *(uint *)(param_7 + 8);
                  local_54 = 1;
                }
                else {
                  if (3 < (int)local_58) {
                    *(int *)param_7 = local_3c;
                    local_54 = 0;
                    *(uint *)(param_7 + 4) = local_38;
                    uVar8 = local_58;
                  }
                  *(uint *)(param_7 + 0xc) = uVar8;
                  if ((uVar8 & 2) != 0) {
                    return 0;
                  }
                  if ((uVar8 & 1) == 0) {
                    return 0;
                  }
                  uVar4 = *(uint *)(param_7 + 8);
                }
LAB_00203ad8:
                if (uVar4 == 4) {
                  return local_54;
                }
              }
              p_Var7 = p_Var7 + -8;
            }
          }
          else {
            bVar1 = true;
            p_Var7 = p_Var7 + -8;
          }
        }
        if (!bVar1) {
          return local_54;
        }
        if (bVar2 == false) {
          return local_54;
        }
        bVar2 = false;
      } while( true );
    }
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 4) = param_2;
    if (param_1 < 0) {
      if (param_1 == -2) {
        *(undefined4 *)(param_7 + 0xc) = 1;
      }
    }
    else {
      if (param_6 == (void *)((int)param_4 + param_1)) {
        uVar9 = 6;
      }
      else {
        uVar9 = 1;
      }
      *(undefined4 *)(param_7 + 0xc) = uVar9;
    }
  }
  return 0;
}


