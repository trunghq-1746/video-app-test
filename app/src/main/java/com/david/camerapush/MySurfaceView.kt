package com.david.camerapush

import android.content.Context
import android.graphics.*
import android.util.AttributeSet
import android.view.SurfaceHolder
import android.view.SurfaceView


class MySurfaceView: SurfaceView, SurfaceHolder.Callback {
    private lateinit var paint: Paint
    private lateinit var icon: Bitmap

    constructor(context: Context?) : super(context) {
        initView()
    }
    constructor(context: Context?, attrs: AttributeSet?) : super(context, attrs) {
        initView()
    }
    constructor(context: Context?, attrs: AttributeSet?, defStyleAttr: Int) : super(context, attrs, defStyleAttr) {
        initView()
    }
    constructor(context: Context?, attrs: AttributeSet?, defStyleAttr: Int, defStyleRes: Int) : super(
        context,
        attrs,
        defStyleAttr,
        defStyleRes
    ) {
        initView()
    }

    init {
        holder.addCallback(this)
    }

    override fun onDraw(canvas: Canvas?) {
        super.onDraw(canvas)
        //canvas!!.drawColor(Color.BLACK)
        canvas?.drawBitmap(icon, 10F, 10F, paint)
    }

    override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
    }

    override fun surfaceCreated(holder: SurfaceHolder) {
        var canvas: Canvas? = null
        try {
            canvas = holder.lockCanvas(null)
            synchronized(holder) {
                onDraw(canvas)
            }
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            if (canvas != null) {
                holder.unlockCanvasAndPost(canvas)
            }
        }
    }

    override fun surfaceDestroyed(holder: SurfaceHolder) {

    }

    private fun initView() {
        paint = Paint()
        icon = BitmapFactory.decodeResource(resources, R.drawable.ic_action_info)
    }
}