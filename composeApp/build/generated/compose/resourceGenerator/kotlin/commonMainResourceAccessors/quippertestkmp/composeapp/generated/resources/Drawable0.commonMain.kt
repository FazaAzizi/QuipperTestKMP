@file:OptIn(org.jetbrains.compose.resources.InternalResourceApi::class)

package quippertestkmp.composeapp.generated.resources

import kotlin.OptIn
import org.jetbrains.compose.resources.DrawableResource

private object CommonMainDrawable0 {
  public val compose_multiplatform: DrawableResource by 
      lazy { init_compose_multiplatform() }

  public val ic_arrow: DrawableResource by 
      lazy { init_ic_arrow() }

  public val ic_arrow_back: DrawableResource by 
      lazy { init_ic_arrow_back() }
}

internal val Res.drawable.compose_multiplatform: DrawableResource
  get() = CommonMainDrawable0.compose_multiplatform

private fun init_compose_multiplatform(): DrawableResource =
    org.jetbrains.compose.resources.DrawableResource(
  "drawable:compose_multiplatform",
    setOf(
      org.jetbrains.compose.resources.ResourceItem(setOf(),
    "composeResources/quippertestkmp.composeapp.generated.resources/drawable/compose-multiplatform.xml", -1, -1),
    )
)

internal val Res.drawable.ic_arrow: DrawableResource
  get() = CommonMainDrawable0.ic_arrow

private fun init_ic_arrow(): DrawableResource = org.jetbrains.compose.resources.DrawableResource(
  "drawable:ic_arrow",
    setOf(
      org.jetbrains.compose.resources.ResourceItem(setOf(),
    "composeResources/quippertestkmp.composeapp.generated.resources/drawable/ic_arrow.xml", -1, -1),
    )
)

internal val Res.drawable.ic_arrow_back: DrawableResource
  get() = CommonMainDrawable0.ic_arrow_back

private fun init_ic_arrow_back(): DrawableResource =
    org.jetbrains.compose.resources.DrawableResource(
  "drawable:ic_arrow_back",
    setOf(
      org.jetbrains.compose.resources.ResourceItem(setOf(),
    "composeResources/quippertestkmp.composeapp.generated.resources/drawable/ic_arrow_back.xml", -1, -1),
    )
)
