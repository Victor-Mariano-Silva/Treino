local function _init()

	player={
	x = 63,
	y = 63,
	fx = false,
	fy = false,
	sp = 1,
	}
	
end


local function _update()
--player movement
	if btn(0) then 
	player.x -= 2
	player.sp = 1 
	player.fx = true
	player.fy = false
	end
	
	if btn(1) then 
	player.x += 2
	player.sp = 1 
	player.fx = false
	player.fy = false 
	end
	
	if btn(2) then 
	player.y -= 2 
	player.sp = 2
	player.fy = false
	end
	
	if btn(3) then 
	player.y += 2 
	player.sp = 2
	player.fy = true
	end
	
end


local function _draw()
	cls(0)
	spr(player.sp,player.x,
	player.y,1,1,player.fx,player.fy)
end