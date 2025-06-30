function _init()

	player = {
	-- position setters --
	x = 43,
	y = 63,
	fx = false,
	fy = false,
	-- movement amount --
	flap = 0,
	amt = 8,
	foward = 0,
	gravity = 2,
	}
	
	-- sub functions --
 i_ice()

end

function _update()

	-- upwards movement --
	if btnp(2) then
	player.flap = player.amt
	end
	
	if player.flap > 0 then
	player.flap -= 1
	end
	
	player.y -= player.flap
	
	-- momentum --
	player.x += player.foward
	player.y += player.gravity 
	
	-- death zone --
	
	if player.y > 114 then
	player.y = 114
	
	else if player.y < 0 then
	player.y = 0
	
	end
	end
	
		-- sub functions --
	u_ice()
	
end

function _draw()
cls()
map()
spr(1,player.x,player.y,2,2)

	-- sub functions --
	d_ice()
	
end

	-- ice --
	
function i_ice()
	-- inicialize ice -- 
	top_ice = {
	x = 114,
	y = 0,
	}
	
	bot_ice = {
	x = 114,
	y = 96,
	}

end

function u_ice()
	-- updates ice --
	
	top_ice.x -= 1
	bot_ice.x -= 1
	
	if top_ice.x < -16 then
	top_ice.x = 128
	
	end
	
		if bot_ice.x < -16 then
	bot_ice.x = 128
	
	end

end

function d_ice()
	-- draw ice --

	spr(6,top_ice.x,top_ice.y,2,4)
	spr(8,bot_ice.x,bot_ice.y,2,4)

	
end
